// Program to print both sides of a pyramid of a specified height
// CS50 pset 1 - 'More comfortable' version of 'Mario'
// Charlie Howard 2017

#include <stdio.h>

int main(void)
{
    // ask the user for a height input
    int height;
    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height < 0 || height > 23);

    // create i integer for 0
    // check that it is lower than height and run, adding one each loop
    for (int i = 0; i < height; i++)
    {
        // creat s integer (spaces) and repeat until this is 0
        for (int spaces = (height - i); spaces > 1; spaces--)
        {
            printf(" ");
        }

        // create hashes integer and repeat until this is 0
        for (int hashes = (1 + i); hashes > 0 ; hashes--)
        {
            printf("#");
        }

        printf("  ");

        for (int hashes = (i + 1); hashes > 0 ; hashes--)
        {
            printf("#");
        }

    // return the line for the next repeat
        printf("\n");
    }

    return 0;
}
