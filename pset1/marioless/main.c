// Program to print half a pyramid of a specified height
// CS50 pset 1 - 'Less comfortable' version of 'Mario'
// Charlie Howard 2017


#include <stdio.h>

int main(void)
{
    // Retrieve the height as an int from the user
    // Check that the int is between 0 and 23

    int height;
    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height < 0 || height > 23);

    // Loop printing the number of times specified by the user

    for (int i = 0; i < height; i++)
    {
        // Print the spaces

        for (int spaces = (height - 1 - i); spaces > 0; spaces--)
        {
            printf(" ");
        }

        // Print the hashes
        for (int hashes = (i + 2); hashes > 0; hashes--)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
