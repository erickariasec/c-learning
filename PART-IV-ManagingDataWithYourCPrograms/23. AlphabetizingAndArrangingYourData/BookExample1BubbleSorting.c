/*
The next program sorts a list of 10 numbers. The numbers are randomly generated using rand(). The bubble sort routine
is little more than a nested for loop. The inner loop walks through the list, swapping any pair of values that is out
of order down the list. The outer loop causes the inner loop to run several times (one time for each item in the list).

An added bonus that is common to many improved bubble sort routines is the testing to see whether a swap took place
during any iteration of the inner loop. If no swap took place, the outer loop finishes early (via a break statement).
Therefore, if the loop is sorted to begin with, or if only a few passes are needed to sort the list, the outer loop
doesn’t have to finish all its planned repetitions.
*/




// Example program #1 from Chapter 23 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter23ex1.c

/* This program generates 10 random numbers and then sorts them */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{

    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    // If you don't include this statement, your program will always
    // generate the same 10 random numbers

    srand(time(&t));

    // The first step is to fill the array with random numbers
    // (from 1 to 100)


    for (ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }

    // Now list the array as it currently is before sorting
    puts("\nHere is the list before the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // Sort the array

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; //Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // Now list the array as it currently is after sorting
    puts("\nHere is the list after the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }


    return(0);
}


/*
Here is the swapping of the variables inside the inner loop:

                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;

In other words, if a swap needs to take place (the first of the two values being compared is higher than the second
of the two values), the program must swap nums[inner] with nums[outer].

You might wonder why an extra variable, temp, was needed to swap two variables’ values. A natural (and incorrect)
tendency when swapping two variables might be this:

                nums[inner] = nums[outer];  // Does NOT swap the
                nums[outer] = nums[inner];  // two values

The first assignment wipes out the value of nums[inner] so that the second assignment has nothing to assign. Therefore,
a third variable is required to swap any two variables.
*/


/*
TIP:
If you wanted to sort the list in descending order, you would only have to change the less-than sign (<) to a
greater-than sign (>) right before the swapping code.
*/
