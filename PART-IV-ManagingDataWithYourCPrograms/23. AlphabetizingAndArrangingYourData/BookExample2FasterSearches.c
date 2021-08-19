/* The following program is a combination of the customer ID searching program shown in the previous chapter and the
sorting routine shown in this chapter. The customer ID values are sorted, and then the user is asked for a customer ID
to find. The program then determines whether the customer’s balance is less than $100. However, if the ID is not in the
list, the program terminates the search early. Keep in mind that having only 10 array values makes this program seem like
overkill, but if there were tens of thousands of customers, the code would not be different. */




// Example program #2 from Chapter 23 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter23ex2.c

/* This program searches a sorted list of customer IDs in order to
get credit totals */

#include <stdio.h>

main()
{

    int ctr; // Loop counter
    int idSearch; // Customer to look for (the key)
    int found = 0; // 1 (true) if customer is found

    /* Defines the 10 elements in each of the parallel arrays */
    int custID[10] = {313, 453, 502, 101, 892,
                      475, 792, 912, 343, 633};
    float custBal[10] = {  0.00, 45.43, 71.23, 301.56, 9.08,
                         192.41, 389.00, 229.67, 18.31, 59.54};
    int tempID, inner, outer, didSwap, i; // For sorting
    float tempBal;

    // First, sort the arrays by customer ID */
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner]; // Must switch both arrays
                tempBal = custBal[inner]; // or they are no longer
                                          // linked
                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; // True because a swap took place
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    /* Interact with the user looking to find a balance */
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What is the customer number? ");
    scanf(" %d", &idSearch);

    // Now, look for the ID in the array
    for (ctr=0; ctr<10; ctr++)
    {
        if (idSearch == custID[ctr]) // Do they match?
        {
            found = 1; //Yes, match flag is set to TRUE
            break; //No need to keep looping
        }
        if (custID[ctr] > idSearch) // No need to keep searching
        {
            break;
        }
    }

    // Once the loop has completed, the ID was either found
    // (found = 1) or not

    if (found)
    {
        if (custBal[ctr] > 100)
        {
            printf("\n** That customer's balance is $%.2f.\n",
                   custBal[ctr]);
            printf("No additional credit.\n");

        }
        else // Balance is less than $100.00
        {
            printf("\n**The customer's credit is good!\n");
        }
    }
    else // The ID was not found
    {
        printf("** You have entered an incorrect customer ID.");
        printf("\n ID %3d was not found in the list.\n", idSearch);
    }
    return(0);
}


/* Before seeing this program, you mastered both array searching and array sorting. This program simply puts the two
procedures together. About the only additional job this program does is keep the two parallel arrays in synch during
the search.
As you can see from the body of the search code, when customer ID elements are swapped (within the custID array), the
corresponding (via the subscript) element in the customer balance array is searched.

An early search termination could take place because of the following:

        if (custID[ctr] > idSearch)  // No need to keep searching
        {
              break;
        }

Keeping arrays sorted is not always easy or efficient.
For instance, you don’t want your program sorting a large array every time you add, change, or delete a value from the
array. After storing several thousand values in an array, sorting the array after adding each value takes too much time,
even for fast computers.
Advanced ways of manipulating arrays ensure that you always insert items in sorted order.
(However, such techniques are way beyond the scope of this book.) You’re doing well without complicating things too
much here.
*/



/*
• The nested for loop, such as the one you saw in this chapter, is a perfect statement to produce a bubble sort.

• Don’t swap the values of two variables unless you introduce a third temporary variable to hold the in-between value.

• Sorting routines doesn’t have to be hard; start with the one listed in this chapter, and adapt it to your own needs.

• Don’t forget to keep your arrays sorted. You’ll speed up searching for values.
*/
