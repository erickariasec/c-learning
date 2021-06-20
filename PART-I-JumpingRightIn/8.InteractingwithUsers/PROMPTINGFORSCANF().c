/* Almost every scanf() you write should be preceded with printf(). If you don’t start with a printf(), the program
stops and waits for input, and the user has no idea what to do. For example, if you need to get an amount from the
user, you would put a printf() function like this before scanf():

printf("What is the amount? ");  /* Prompt */ /* A scanf() would follow */


// A printf() before a scanf() sends a prompt to the user
// If you don’t prompt the user for the value or values you want, the user has no way of knowing what values should be typed.
// Generally, the printf() requests the data from the user, and the scanf() gets the data that the user types.




// --------------------------------------------------------------------------------------------------------------------------




// Example program #1 from Chapter 8 of Absolute Beginner's Guide to
// C, 3rd Edition
// File Chapter8ex1.c

/* This is a sample program that asks users for some basic data and
prints it on screen in order to show what was entered */

#include <stdio.h>


main()
{
    // Set up the variables that scanf will fill

    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favorite number (integer only)?\n");
    scanf(" %d", &favorite_number);


    printf("\nYour intitials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
    printf("\nYour favorite number is %d.\n\n", favorite_number);

    return 0;
    }


/* If the user types more than a single character in the first two examples, it can confuse the program and
create problems for the later values. */

/* Another point to notice about the scanf() statements is the spaces right before each %c or %d. The space isn’t
always required here, but it never hurts, and it sometimes helps the input work better when you get numbers and
characters in succession. Adding the extra space is a good habit to get into now while learning scanf(). */

// scanf() requires that you put the ampersand (&) before all variables.

/* An exception to the ampersand rule does exist. If you’re getting input into an array using %s, as happens
when you ask users for a name to be stored in a character array, you do not use the ampersand. */

/* The bottom-line rule is this: If you’re asking the user to type integers, floating points, characters, doubles,
or any of the other single-variable combinations (long integers and so on), put an ampersand before the variable
names in the scanf(). If you are asking the user for a string to input into a character array, don’t put the
ampersand before the array name. */

/* scanf() stops reading string input at the first space. Therefore, you can get only a single word at a time
with scanf(). If you must ask the user for more than one word, such as the user’s first and last name, use
two scanf() statements (with their own printf() prompts) and store the two names in two character arrays. */
