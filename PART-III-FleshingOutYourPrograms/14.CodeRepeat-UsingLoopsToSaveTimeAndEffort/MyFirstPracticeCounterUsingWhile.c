// CREATE A COUNTER

/* We are going to create a counter, it will begin from 1 and it will finish until the MAXIMUM NUMBER, then
MAXIMUM NUMBER will return to 1. User needs to insert the MAXIMUM NUMBER. */

#include <stdio.h>

#define MIN_VALUE 1

main()
{
    // SET UP VARIABLES
    int ctr = 0;
    int maxValue;

    printf("\n\n\t\t\t\t\t\t\tCOUNTER\n");
    printf("\t\t\t\t\t\t\t-------\n\n\n");

    printf("Insert a number: (from 5-100, only integers)\n");
    scanf(" %d", &maxValue);

    printf("\n");

    while (ctr < maxValue)
    {
        printf("Counter is at %d.\n", ++ctr);
    }

    while (ctr > MIN_VALUE)
    {

        printf("Counter is at %d.\n", --ctr);
    }

    return 0;
}
