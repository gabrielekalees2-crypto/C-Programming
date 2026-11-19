/*
Author: Gabriel Ekalees
ADM : BCS-01-0562/2026
Date: 27-10-2026
Description: Tracks room occupancy across five floors and displays occupied and vacant room counts.
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];

    printf("Room Occupancy (Single Branch)\n");
    printf("Enter 1 for Occupied or 0 for Vacant for each room.\n\n");

    int floor;
    int room;

    for (floor = 0; floor < 5; floor++) {
        int occupied_count = 0;
        int vacant_count = 0;

        printf("--- Floor %d ---\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("Room %d (1 or 0): ", room + 1);
            scanf("%d", &occupancy[floor][room]);

            // Input validation loop
            while (occupancy[floor][room] != 0 && occupancy[floor][room] != 1) {
                printf("Invalid input! Enter 1 (Occupied) or 0 (Vacant): ");
                scanf("%d", &occupancy[floor][room]);
            }

            if (occupancy[floor][room] == 1) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        printf("-> Floor %d Summary -> Occupied: %d | Vacant: %d\n\n", floor + 1, occupied_count, vacant_count);
    }

    return 0;
}