/* The following program demonstrates gets() and puts(). As you look through it, notice that neither printf()
nor scanf() is required to input and print strings. */


// Example program #2 from Chapter 19 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter19ex2.c

/* This program asks a user for their hometown and the two-letter
abbreviation of their home state. It then uses string concatenation
to build a new string with both town and state and prints it using
puts. */

// stdio.h is needed for puts() and gets()
// string.h is needed for strcat()

#include <stdio.h>

main()
{

       char city[15];
       // 2 chars for the state abbrev. and one for the null zero
       char st[3];
       char fullLocation[18] = "";

       puts("What town do you live in? ");
       gets(city);

       puts("What state do you live in? (2-letter abbreviation)");
       gets(st);

       /* Concatenates the strings */
       strcat(fullLocation, city);
       strcat(fullLocation, ", "); //Adds a comma and space between the city
       strcat(fullLocation, st); //and the state abbreviation

       puts("\nYou live in ");
       puts(fullLocation);
       return(0);
}


/*
strcat() has to be used three times: once to add the city, once for the comma, and once to tack the state onto
the end of the city.

puts() automatically puts a newline at the end of every string it prints. You don’t have to add a \n at the end
of an output string unless you want an extra blank line printed.

gets() converts the Enter keypress to a null zero to ensure that the data obtained from the keyboard winds up
being a null-terminated string instead of an array of single characters.

One of the most important reasons to use gets() over scanf() is that you can ask the user for strings that contain
embedded spaces, such as a full name (first and last name).

scanf() cannot accept strings with spaces.
scanf() stops getting user input at the first space.

with gets(), you could allow the user to type in titles with more than one word.
*/
