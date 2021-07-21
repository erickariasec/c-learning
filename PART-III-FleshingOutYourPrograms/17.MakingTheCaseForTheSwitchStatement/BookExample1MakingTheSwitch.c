/* The following simple program uses a switch statement to print an appropriate message, depending on the choice
the user makes. */




// Example program #1 from Chapter 17 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter17ex1.c

/* This program presents a menu of choices, gets the user's choice,
and then uses the switch statement to execute a line or two of code
based on that choice. (What the user wants to do is not truly
implemented—it is just a series of stubs to teach the value of the
switch statement. */

#include <stdio.h>
#include <stdlib.h>

main()
{

    int choice;

    printf("What do you want to do?\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");
    do
    {

        printf("Enter your choice: ");
        scanf(" %d", &choice);
        switch (choice)
        {
            case (1): printf("\nTo add you will need the ");
                      printf("contact's\n");
                      printf("First name, last name, and number.\n");
                      break;
            case (2): printf("\nGet ready to enter the name of ");
                      printf("name of the\n");
                      printf("contact you wish to change.\n");
                      break;
            case (3): printf("\nWhich contact do you ");
                      printf("wish to call?\n");
                      break;
            case (4): printf("\nWhich contact do you ");
                      printf("wish to text?\n");
                      break;
            case (5): exit(1); //Exits the program early
            default:  printf("\n%d is not a valid choice.\n", choice);
                      printf("Try again.\n");
                      break;
        }
    } while ((choice < 1) || (choice > 5));

    return 0;

    }



/*
If choice equals 5, the program quits using the built-in exit() function.
Anytime you need to terminate a program before its natural conclusion, use the exit() function.
Most beginning programmers ignore the return value and put either a 0 or a 1 in the parentheses.

YOU MUST REMEMBER TO ADD <stdlib.h> WITH THE #include DIRECTIVE IN EVERY PROGRAM THAT USES exit().
*/



/*
The do-while loop keeps the user honest. If the user enters something other than a number from 1 to 5, the ...is not
a valid choice. message prints, thanks to the default keyword. C ensures that if none of the other cases matches
the variable listed after switch, the default statements execute.

DEFAULT works like ELSE

ELSE takes care of an action if an if test is false, and DEFAULT takes care of an action if none of the other case
conditions successfully matches the switch variable.

Although default is optional (as is else), it’s good programming practice to use a default to handle unexpected
switch values.
*/



/* The switch variable can be either an integer or a character variable. DO NOT USE A FLOAT OR A DOUBLE FOR THE
SWITCH TEST. */




// BREAK AND SWITCH

/*
The switch statement shown earlier has several break statements scattered throughout the code. The break statements
ensure that only one case executes. Without the break statements, the switch would “fall through” to the other case
statements. Here is what would happen if the break statements were removed from the switch and the user answered
with a choice of 2:

        Get ready to enter the name of the contact you wish to change.
        Which contact do you wish to call?
        Which contact do you wish to text?

The break keeps switch case statements from running together.
The only reason the default condition’s message did not print is that the exit() function executed inside case (5).

