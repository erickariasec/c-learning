// COMPOUND ASSIGNMENT
// Many times in your programs, you will have to change the value of a variable.
// Often you will need to update a variable.

// COUNTER VARIABLE: is a variable that you add 1 to when a certain event takes place.
// lossCount = lossCount + 1;  /* Adds 1 to lossCount variable */

/* In math, nothing can be equal to itself plus 1. With computers, though, the previous assignment statement
adds 1 to lossCount and then assigns that new value to lossCount, essentially adding 1 to the value of lossCount.
Remember that an equals sign means to take whatever is on the right of the equals sign and store that computed
value in the variable on the left.




// ------------------------------------------------------------------------------------------------------------------




// Example program #1 from Chapter 10 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter10ex1.c

/* This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1. */

#include <stdio.h>

main()
{

    int ctr = 0;

    ctr = ctr + 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 5
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 1
    printf("Counter is at %d.\n", ctr);

    return 0;
    }


/* Notice that ctr keeps increasing (in computer lingo, it’s called incrementing) by 1 with each assignment
statement until it reaches 5, and then decreases (called decrementing) by 1 with each assignment statement
until it reaches 1 */



/* Other times, you’ll need to update a variable by adding to a total or by adjusting it in some way. The
following assignment statement increases the variable sales by 25 percent:  */
// sales = sales * 1.25;  /* Increases sales by 25 percent */



//  Instead of repeating the variable on both sides of the equals sign, you have to list the variable only once.


// If you want to add 1 to a variable, you can use the compound addition operator, +=.
// These two statements produce the same result:
// lossCount = lossCount + 1;  /* Adds 1 to lossCount variable */
// lossCount += 1;  /* Adds 1 to lossCount variable */


/* The compound operators are quicker to use than writing out the entire assignment because you don’t have to list
the same variable name on both sides of the equals sign.
The compound operators reduce typing errors because you don’t have to type the same variable name twice in the same
statement. */


/*

----------------------------------------------------------------------------------------------
COMPOUND OPERATOR                   EXAMPLE                         EQUIVALENT STATEMENT
----------------------------------------------------------------------------------------------
    *=                              total *= 1.25;                  total = total * 1.25;
    /=                              amt /= factor;                  amt = amt / factor;
    %=                              days %= 3;                      days = days % 3;
    +=                              count += 1;                     count = count + 1;
    -=                              quantity -= 5;                  quantity = quantity - 5;
----------------------------------------------------------------------------------------------

*/


