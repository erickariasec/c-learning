/*
The getchar() function returns the character input from the keyboard. Therefore, you usually assign the character to
a variable or do something else with it. You can put getchar() on a line by itself, like this:

        getchar();  // Does nothing with the character you get

However, most C compilers warn you that this statement is rather useless. The getchar() function would get a
character from the keyboard, but then nothing would be done with the character.
*/


//----------------------------------------------------------------------------------------------------------------------


/* Here is a program that gets one character at a time from the keyboard and stores the collected characters in a
character array. A series of putchar() functions then prints the array backward. */



// Example program #2 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex2.c

/* This program is nothing more than a simple demonstration of the
getchar() function. */

// getchar() is defined in stdio.h, but string.h is needed for the
// strlen() function

#include <stdio.h>
#include <string.h>

main()
{
       int i;
       char msg[25];

       printf("Type up to 25 characters and then press Enter...\n");
       for (i = 0; i < 25; i++)
       {
              msg[i] = getchar(); //Outputs a single character
               if (msg[i] == '\n')
              {
                  i--;
                  break;
            }
       }

       putchar('\n'); // One line break after the loop is done.

       for (; i >= 0; i--)
       {
           putchar(msg[i]);
       }

       putchar('\n');

       return(0);
}


/*
NOTE:
Notice that the second for loop variable i has no initial value. Actually, it does. i contains the last array
subscript entered in the previous getchar() for loop. Therefore, the second for loop continues with the value
of i left by the first for loop.
*/



// The getchar() input character typically is defined as an int, as done here.



/*
Aren’t you glad you learned about break? The program keeps getting a character at a time until the user
presses Enter (which produces a newline \n escape sequence). break stops the loop.
*/


// Although getchar() gets a single character, control isn’t returned to your program until the user presses Enter.
