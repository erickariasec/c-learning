// USING IF

/*

Here’s the format of the if statement:

    if (condition)
    { block of one or more C statements; }

The parentheses around the condition are required.
block of one or more C statements is called the body of the if statement.
The braces around the block of one or more C statements are required if the body of the if contains more than
a single statement.

Even though braces aren’t required, if an if contains just one statement, always use the braces. If you later add
statements to the body of the if, the braces will be there. If the braces enclose more than one statement, the
braces enclose what is known as a compound statement.




-------------------------------------------------------------------------------------------------------------------*/




// Example program #1 from Chapter 11 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter11ex1.c

/* This program asks the user for their birth year and calculates
how old they will be in the current year. (it also checks to make
sure a future year has not been entered.) It then tells the user if
they were born in a leap year. */

#include <stdio.h>
#define CURRENTYEAR 2021

main()
{

    int yearBorn, age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);

    // This if statement can do some data validation, making sure
    // the year makes sense
    // The statements will only execute if the year is after the
    // current year

    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Want to try again with a different year?\n");
        printf("What year were you born?\n");
        scanf(" %d", &yearBorn);
    }

    age = CURRENTYEAR - yearBorn;

    printf("\nSo this year you will turn %d on your birthday!\n",
    age);

    // The second if statment uses the modulus operator to test if
    // the year of birth was a Leap Year. Again, only if it is will
    // the code execute

    if ((yearBorn % 4) == 0)
    {
        printf("\nYou were born in a Leap Year--cool!\n");
    }

    return 0;
}


/*
Consider a few notes about this program. If you use the current year in your program, that’s a good variable
to set with a #define statement before main(). That way, you can simply change that one line later if you run
this program any year in the future.

The section in the braces reminds the reader that he or she couldn’t possibly be born in the year entered and gives
the user a chance to enter a new year. The program then proceeds as normal.
*/
