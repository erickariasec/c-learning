// CREATE A PROGRAM THAT LIST USER NUMBERS(10).
// This is an exercise challege from TodoCode Youtube Channel.

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int userNumbers[10] = {};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf(" %d", &userNumbers[i]);
    }

    printf("\n\nYour numbers have been successful registered!\a\n\n");

    printf("Now, here is the list of your numbers: \n\n");

    for (i = 0; i < 10; i++)
    printf("This is number %d: %d\n", i+1, userNumbers[i]);
}
