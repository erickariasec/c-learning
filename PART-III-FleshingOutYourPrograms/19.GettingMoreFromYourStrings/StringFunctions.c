// STRING FUNCTIONS

/*
The string.h header file contains descriptions for more functions than just strcpy() and strlen(). This section
explains the strcat() function that lets you merge two character arrays, as long as the arrays hold strings. strcat()
stands for string concatenation.

strcat() takes one string and appends it to—that is, adds it onto the end of—another string.

This code fragment shows what happens with strcat():

        char first[25] = "Katniss";
        char last[25] = " Everdeen";
        strcat(first, last); //Adds last to the end of first
        printf("I am $s\n", first);

Here is the output of this code:

        I am Katniss Everdeen

strcat() requires two string arguments. strcat() tacks the second string onto the end of the first one.
The space appears before the last name only because the last array is initialized with a space before the last name
in the second line.
*/


/* WARNING:
You are responsible for making sure that the first array is large enough to hold both strings. If you attempt to
concatenate a second string to the end of another string, and the second string is not defined with enough characters
to hold the two strings, strange and unpredictable results can happen. */


/* Because the second argument for strcat() is not changed, you can use a string literal in place of a character array
for the second argument, if you like.



/*

    puts()  and   gets()

The puts() and gets() functions provide an easy way to print and get strings.

Their descriptions are in stdio.h

puts() sends a string to the screen.

gets() gets a string from the keyboard

*/
