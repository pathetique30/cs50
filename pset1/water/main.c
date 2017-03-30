/* Program to report a user's water usage, converting minutes in
the shower to bottles of water */
// CS50 pset 1 - water
// Charlie Howard 2017

#include <stdio.h>

int main(void)
{
    int minutes;

    printf("Minutes: ");
    scanf("%i", &minutes);

    // Assumption that 12 bottles are used every minute
    int bottles = minutes * 12;

    printf("Bottles: %i\n", bottles);

    return 0;
}
