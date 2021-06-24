// BOOK EXAMPLE 2 COMPOUND OPERATORS

// Example program #2 from Chapter 10 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter10ex2.c

/* This program also increases a counter from 1 to 5, printing updates
and then counts it back down to 1. However, it uses compound
operators*/

#include <stdio.h>

main()
{

    int ctr = 0;

    ctr += 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // increases counter to 2
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1);
    ctr += 1; // increases counter to 4
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1); // increases counter to 5
    ctr -= 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 3
    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 2
    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 1

    return 0;
    }


// WATCH THAT ORDER!

/* The order of operators table can haunt the unwary C programmer. Think about how you would evaluate the
second of these expressions:

    total = 5;
    total *= 2 + 3;  // Updates the total variable

At first glance, you might think that the value of total is 13 because you learned earlier that multiplication
is done before addition.
Compound multiplication is done after addition.


        total *= 2+3;
              /
             /
    is the same thing as this:
           /
          /
   total = total * (2+3);

  because *= is lower than + in the table.

