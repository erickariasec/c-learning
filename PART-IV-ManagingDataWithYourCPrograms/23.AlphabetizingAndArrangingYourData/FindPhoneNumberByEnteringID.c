// FIND PHONE NUMBER BY ENTERING ID/CI

/*
1. Create an array that contains three ID.
2. Create an array that contains three phone numbers.
3. User has to enter an ID, and the program will search phone number if there is.
*/

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int personID[3] = {1725044000, 1710215094, 1721207270};
    int personPhoneNumber[3] = {995645290, 987150592, 987718611};
    int enterID, ctr, inner, outer, auxID, auxPhoneNumber, didSwap;
    int found = 0;
    didSwap = 0;
    auxID = 0;
    auxPhoneNumber = 0;


    printf("\n\n\t\t\t\t\tFIND PHONE NUMBER BY ENTERING ID/CI\n");
    printf("\t\t\t\t\t-----------------------------------\n\n\n");

    // Sort arrays by customer ID or CI
    for (outer = 0; outer < 2; outer++)
    {
        for (inner = outer; inner < 3; inner++)
        {
            if (personID[inner] < personID[outer])
            {
                auxID = personID[inner];
                auxPhoneNumber = personPhoneNumber[inner];

                personID[inner] = personID[outer];
                personPhoneNumber[inner] = personPhoneNumber[outer];

                personID[outer] = auxID;
                personPhoneNumber[outer] = auxPhoneNumber;

                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // Interact with user to find phone number
    printf("Enter ID number: ");
    scanf(" %d", &enterID);

    // Look for the ID in the array
    for (ctr = 0; ctr < 3; ctr ++)
    {
        if (enterID == personID[ctr])
        {
            found = 1; //Yes, match flag is set to TRUE
            break; //No need to keep looping
        }
        if (personID[ctr] > enterID) // No need to keep searching
        {
            break;
        }
    }

    // Once the loop has completed, the ID was either found
    // (found = 1) or not

    if (found)
    {
        printf("\nHere is phone number: +593 %d\n\n\a", personPhoneNumber[ctr]);
    }
    else
    {
        printf("\nSorry, that ID is not registered in the system!\n\n\a");
    }

    return 0;
}

