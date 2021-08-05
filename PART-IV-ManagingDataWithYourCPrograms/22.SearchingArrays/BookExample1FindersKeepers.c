/* The following program does just that. Actually, the program maintains a list of only 10 customers because you’re not
yet ready to tackle disk input (but you’re almost there!). The program initializes the arrays when the arrays are first
defined, so maintaining only 10 array element pairs (the customer ID and the corresponding balance arrays) keeps the
array definitions simple. */



// Example program #1 from Chapter 22 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter22ex1.c

/* This program takes an ID number from the user and then checks the
ID against a list of customers in the database. If the customer
exists, it uses that array element to check their current balance,
and warns the user if the balance is more than 100 */

#include <stdio.h>

main()
{

    int ctr; // Loop counter
    int idSearch; // Customer to look for (the key)
    int found = 0; // Will be 1 (true) if customer is found

    // Defines the 10 elements in the two parallel arrays

    int custID[10] = {313, 453, 502, 101, 892,
                      475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08,
                         192.41, 389.00, 229.67, 18.31, 59.54};

    /* Interact with the user looking for a balance. */
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check? ");
    scanf(" %d", &idSearch);

    /* Search to see that the customer ID exists in the array */
    for (ctr=0; ctr<10; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        if (custBal[ctr] > 100.00)
        {
            printf("\n** That customer's balance is $%.2f.\n",
                   custBal[ctr]);
            printf(" No additional credit.\n");
        }
        else
        {
            printf("\n** The customer's credit is good!\n");
        }
    }
    else
    {
        printf("** You must have typed an incorrect customer ID.");
        printf("\n   ID %3d was not found in list.\n", idSearch);
    }

    return(0);
}



/*
This program’s attempted customer search has three possibilities:

• The customer’s balance is less than $100.

• The customer’s balance is too high (more than $100).

• The customer’s ID is not even in the list.
*/


/*
TIP:
The found variable is often called a flag variable because it flags (signals) to the rest of the program whether the
customer ID was or was not found.
*/


/*
The program’s for loop might end without finding the customer. The code following the for loop would have no way of
knowing whether the for’s break triggered an early for loop exit (meaning that the customer was found) or whether
the for ended normally. Therefore, the found variable lets the code following the for loop know whether the for found
the customer.

When the for loop ends, the customer is found (or not found). If found, the following two conditions are possible:

    • The balance is already too high.

    • The balance is okay for more credit.

No matter which condition is the true condition, the user is informed of the result. If the customer was not found,
the user is told that and the program ends.
*/


/*
NOTE:
What’s really important is that if there were a thousand, or even 10,000 customers, and the arrays were initialized
from a disk file, the same search code would work! The amount of data doesn’t affect the logic of this program (only
the way the arrays are initialized with data).
*/
