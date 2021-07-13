// WORKING WITH FOR

/*
The for loop reads a lot like the way you speak in everyday life. Consider this statement:

    For each of our 45 employees, calculate the pay and print a check.

This statement leaves no room for ambiguity. There will be 45 employees, 45 pay calculations, and 45 checks printed.
To make this loop work for even more companies, the program could prompt the user to enter how many employees
will need to have payroll calculations and then use that entry for the loop as follows: */

#include <stdio.h>

main()
{
    int employees;
    int i = 0;

    printf("How many employees in the organization? ");
    scanf(" %d", &employees);

    // Loop to calculate payroll for each employee
    for (i=1; i <= employees; i++)
    {
           // Calculations for each employee follow...
        printf("There are %d employees.\n", i);
    }
}

/*
for loops don’t always count up as the preceding two did. This for loop counts down before printing a message:

        for (cDown = 10; cDown >0; cDown--)
        {
               printf("%d.\n", cDown);
        }
        printf("Blast off!\n");

Here is the output of this code:

        10
        9
        8
        7
        6
        5
        4
        3
        2
        1
        Blast off!
*/


/*
You also do not have to increase or decrease your loop counter by 1. The following for loop counts up by threes,
beginning with 1:

        for (i = 1; i < 18; i += 3)
        {
            printf("%d ", i); // Prints 1, 4, 7, 10, 13, 16
        }
*/


// NESTING THE LOOPS
/*
The following code produces an interesting effect:

        for (outer = 1; outer <= 3; outer++)
        {
               for (inner = 1; inner <= 5; inner++)
               {
                      printf("%d ", inner);
               }
               // Print a newline when each inner loop finishes
               printf("\n");
        }

Here is the code’s output:

        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5

If you put a for loop in the body of another loop, you are nesting the loops. In effect, the inner loop executes
as many times as the outer loop dictates. You might need a nested for loop if you wanted to print three lists of
your top five customers. The outer loop would move from 1 to 3, while the inner loop would print the top five customers.
*/
