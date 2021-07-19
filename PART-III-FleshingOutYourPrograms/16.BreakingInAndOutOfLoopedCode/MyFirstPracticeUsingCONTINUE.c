// Create a program that eliminates multiples of 5, but the program continues until the user wants. Max program allows 100.

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int ctr, maxUserNumber, getUserMultiple;

    printf("\n\n\t\t\t\t\t\tCOUNTER - MULTIPLES NOTIFIER\n\n");

    // GET USER MULTIPLES FOR EXECUTING THIS PROGRAM
    printf("Enter the number of which you want to get its multiples: \a");
    scanf(" %d", &getUserMultiple);

    // GET MAX NUMBER TO FINISH THE PROGRAM
    printf("\n\nEnter max number until you want to see: \a");
    scanf(" %d", &maxUserNumber);
    printf("\n\n");



    for (ctr = 1; ctr <= maxUserNumber; ctr++)
    {

        // THIS NUMBER ENDS TOTALLY THE PROGRAM
        if (ctr == 100)
        {
            break;
        }

        else if ((ctr % getUserMultiple) == 0)
        {
            printf("COUNTER IS AT %d \t\t%d IS MULTIPLE OF %d!\n", ctr, ctr, getUserMultiple);
            continue;
        }

        else
        {
            printf("Counter is at %d\n", ctr);
        }
    }

    return 0;
}






