// Example program #3 from Chapter 11 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter11ex3.c

/* This program asks the user their state of happiness on a scale of
1 to 10 and then gives a custom 2-line message based on their range,
either 1-2, 3-4, 5-7, or 8-10. */

#include <stdio.h>

main()
{

    int prefer;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &prefer);

    // Once the user's level of happiness is entered, a series of if
    // statements
    // test the number against decreasing numbers. Only one of the
    // four will be
    // executed.

    if (prefer >= 8)
    {
        printf("Great for you!\n");
        printf("Things are going well for you!\n");
    }
    else if (prefer >= 5)
    {
        printf("Better than average, right?\n");
        printf("Maybe things will get even better soon!\n");
    }
    else if (prefer >= 3)
    {
        printf("Sorry you're feeling not so great.\n");
        printf("Hope things turn around soon...\n");
    }
    else
    {
        printf("Hang in there--things have to improve, right?\n");
        printf("Always darkest before the dawn.\n");
    }

    return 0;
}

/* The goal of this program is to demonstrate that if...else statements do not have to be limited to two choices.
Frankly, you can set as many if...else if...else if...else conditions as you’d like.
You could have a custom message for every number between 1 and 10 in this program.

Each test eliminates some of the possibilities. This is why the second test works only for numbers 5 through 7,
even though the test is for whether the number is greater or equal to 5; numbers 8 and higher were already
eliminated with the first if test. */
