// Here is my first practice using break
// Create a program where user can enter a number and program will execute until that number
// 1. Get numbers divisible for 2
// 2. Get numbers divisible for 3
#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int ctr, maxPairNumber, maxImpairNumber;

    printf("Write the number up to where you want to get all EVEN numbers: \a");
    scanf(" %d", &maxPairNumber);
    printf("\n\n");

    for (ctr = 1; ctr <= maxPairNumber; ctr++)
    {
        if (ctr %2 == 0)
        printf("This is an EVEN number: %d\n", ctr);
        if (ctr == 10000)
        {
            break;
        }
    }


    printf("\n\nWrite the number up to where you want to get all ODD numbers: \a");
    scanf(" %d", &maxImpairNumber);
    printf("\n\n");

    for (ctr = 1; ctr <= maxImpairNumber; ctr++)
    {
        if (ctr %2 == 1)
        printf("This number is an ODD number: %d\n", ctr);
        if (ctr == 10000)
        {
            break;
        }
    }
    return 0;
}
