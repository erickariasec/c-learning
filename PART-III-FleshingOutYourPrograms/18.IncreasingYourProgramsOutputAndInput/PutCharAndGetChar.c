/* You can produce input and output in more ways than with the scanf() and printf() functions.
You can use these simple functions to build powerful data-entry routines of your own.
Functions explained here are a little easier to use, and they provide some capabilities that scanf() and
printf() don’t offer. */



// PUTCHAR() AND GETCHAR()

/*
getchar() gets a single character from the keyboard.
putchar() sends a single character to the screen.
You can use them just about anytime you want to print or input a single character into a variable.

// IMAGE LINK EXPLANATION
https://learning.oreilly.com/library/view/c-programming-absolute/9780133149869/graphics/18fig01.jpg
*/


/*
TIP:
Always include the stdio.h header file when using this chapter’s I/O (Input/Output)functions, just as you do
for printf() and scanf().
*/


//------------------------------------------------------------------------------------------------------------------------



/* The following program prints C is fun, one character at a time, using putchar() to print each element of the
character array in sequence. Notice that strlen() is used to ensure that the for doesn’t output past the end of
the string. */



// Example program #1 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex1.c

/* This program is nothing more than a simple demonstration of the
putchar() function. */

// putchar() is defined in stdio.h, but string.h is needed for the
// strlen() function

#include <stdio.h>
#include <string.h>

main()
{
       int i;
       char msg[] = "C is fun";

       for (i = 0; i < strlen(msg); i++)
       {
              putchar(msg[i]); //Outputs a single character
       }
       putchar('\n'); // One line break after the loop is done.

       return(0);
}


/*
The getchar() function returns the character input from the keyboard. Therefore, you usually assign the character to
a variable or do something else with it. You can put getchar() on a line by itself, like this:

        getchar();  // Does nothing with the character you get

However, most C compilers warn you that this statement is rather useless. The getchar() function would get a
character from the keyboard, but then nothing would be done with the character.
*/
