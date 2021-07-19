// LET'S CONTINUE WORKING

/*
continue forces a loop to continue early.
continue says, in effect, “C, please ignore the rest of this loop’s body this iteration of the loop. Go back up
to the top of the loop and start the next loop cycle.” */


// The word iteration is a fancy computer name for the cycle of a loop



/* The following program shows off continue nicely. The program contains a for loop that counts from 1 to 10.
If the loop variable contains an odd number, the message I'm rather odd... prints, and the continue instructs C
to ignore the rest of the loop body because it prints Even up! for the even numbers that are left.





// Example program #2 from Chapter 16 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter16ex2.c

/* This program loops through 10 numbers and prints a message that
    varies whether the program is odd or even. It tests for odd and
    if the number is odd, it prints the odd message and then starts
    the next iteration of the loop using continue. Otherwise, it
    prints the even message. */

#include <stdio.h>

main()
{

    int i;

    // Loops through the numbers 1 through 10

    for (i = 1; i <= 10; i++)
        {
                if ((i%2) == 1) // Odd numbers have a remainder of 1
                {
                  printf("I'm rather odd...\n");
                  // Will jump to the next iteration of the loop
                  continue;
                }
                printf("Even up!\n");
        }


    return 0;

    }
