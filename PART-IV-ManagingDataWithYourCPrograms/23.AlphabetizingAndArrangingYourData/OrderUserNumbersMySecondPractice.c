// User needs to enter 5 number, after that, the program needs to order them correctly.

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int userNumbers[5] = {};
    int ctr, inner, outer, aux, didSwap;
    didSwap = 0;
    aux = 0;

    printf("\n\n\t\t\t\t\t\tORDERING YOUR NUMBERS\n");
    printf("\t\t\t\t\t\t---------------------\n\n");

    printf("Please enter 5 numbers:\n\n");
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("Enter number %d: ", ctr+1);
        scanf(" %d", &userNumbers[ctr]);
    }

    printf("\n\nOK, here is the list of your numbers correctly ordered:\n\n");

    for(outer = 0; outer < 4; outer++)
    {
        for(inner = outer; inner < 5; inner++)
        {
            if(userNumbers[inner] < userNumbers[outer])
            {
                aux = userNumbers[inner];
                userNumbers[inner] = userNumbers[outer];
                userNumbers[outer] = aux;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("This is number %d now: %d\n", ctr+1, userNumbers[ctr]);
    }

}
