// CHARACTERS TESTING FUNCTIONS

/*
The character-testing functions can help you determine exactly what kind of input characters your program receives.
You can set up if logic to execute certain courses of action based on the results of the character tests.

TIP:
You must include the ctype.h header file at the top of any program that uses the character functions.

The isalpha() function returns true (which is 1 to C) if the value in its parentheses is an alphabetic
character a through z (or the uppercase A through Z) and returns false (which is 0 to C) if the value in parentheses
is any other character.

Consider this if:

        if (isalpha(inChar))
        {
              printf("Your input was a letter.\n");
        }

The message prints only if inChar contains an alphabetic letter.



C has a corresponding function named isdigit() that returns true if the character in the parentheses is a number
from 0 through 9.

The following if prints A number if inChar contains a digit:

        if (isdigit(inChar))
        {
              printf("A number\n");
        }


NOTE:
isalpha() and isdigit() test character content and return the relational result of the test.
*/



//---------------------------------------------------------------------------------------------------------------------



// IS THE CASE CORRECT?

/*
The isupper() and islower() functions let you know whether a variable contains an upper- or lowercase value.

Using isupper() keeps you from having to write long if statements like this:

        if ((inLetter >= 'A') && (inLetter <= 'Z'))
        {
              printf("Letter is uppercase\n");
        }

Instead, use isupper() in place of the logical comparison:

        if (isupper(inLetter))
        {
        printf("Letter is uppercase\n");
        }


NOTE:
islower() tests for lowercase values.
isupper() tests for uppercase values.


You might want to use isupper() to ensure that your user enters an initial-uppercase letter when entering names.


RESUME:

#include <ctype.h>

Funtions:

isalpha()
isdigit()
isupper()
islower()
*/
