// USING DO...WHILE

/*
while also can be used in conjunction with the do statement. When used as a pair, the statements normally
are called do...while statements or the do...while loop. The do...while behaves almost exactly like the while loop.

Here is the format of do...while:

        do
        { block of one or more C statements; }
        while (condition)

The do and while act like wrappers around the body of the loop. Again, braces are required if the body has more
than a single statement.

Use a do...while in place of a while only when the body of the loop must execute at least one time. The condition is
located at the bottom of the do...while loop, so C can’t test the condition until the loop finishes the first time.
*/




//----------------------------------------------------------------------------------------------------------------------




/*
Here’s a quick program that uses a do...while loop. It asks the user for two numbers and then gives the resulting
value if the two inputs are multiplied. It then asks the user if he or she would like to multiply two more numbers.
As long as the user keeps typing Y, the program keeps asking for numbers to multiply. Only answering N breaks the loop.
*/

// Example program #2 from Chapter 14 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter14ex2.c

/* This program will multiply two numbers and display the result for
as long as the user wants. Answering 'N' will break the loop. */

#include <stdio.h>

main()
{

    float num1, num2, result;
    char choice;

    do {

        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);

        printf("Enter your second number to multiply: ");
        scanf(" %f", &num2);

        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N): ");
        scanf(" %c", &choice);
        // If the user enters a lowercase n, this if statement will
        // convert it to an N
        if (choice == 'n')
            {
                choice = 'N';
            }

        } while (choice != 'N');
    //  } while (choice != 'N'&& choice != 'n');

    return 0;

}


/*
It demonstrates an effective use of a do...while loop.
Use the do...while construct instead of while when you want to ensure that the code within the loop executes at
least once.



