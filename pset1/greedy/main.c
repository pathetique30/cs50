// A program to calculate the minimum number of coins needed to give change
// CS50 pset1 - "greedy"
// Charlie Howard 2017

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Get the amount of change from the user as a float
    // Loop until number is positive

    float input = 0;

    do
    {
            printf("Change: ");
            scanf("%f", &input);
    }
    while(input < 0);

    // Round the input to prevent errors and convert into pennies

    int change = round(input * 100);

    int coins = 0;

    // Iterate through the coins available from largest to smallests
    // Divide by the value and find the remainder to continue

    coins = change / 25;
    change = change % 25;
    coins += (change / 10);
    change = change % 10;
    coins += (change / 5);
    change = change % 5;
    coins += (change / 1);

    printf("%i\n", coins);

    return 0;
}
