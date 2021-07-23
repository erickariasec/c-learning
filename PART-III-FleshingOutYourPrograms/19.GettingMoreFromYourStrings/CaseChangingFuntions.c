// CASE - CHANGING FUNTIONS (CHARACTER - MAPPING FUNTIONS)

/*
touper()
tolower()

Return their arguments converted to a different case.

toupper() returns its parentheses argument as uppercase.
tolower() returns its parentheses argument as lowercase.


The following program segment prints yes or no, depending on the user’s input. Without the toupper() function,
you need an extra test to execute your plan:

        if ((userInput == 'Y') || (userInput == 'y'))
            { printf("yes\n"); }
        else
            { printf("no\n"); }

The next set of statements uses the toupper() function to streamline the if statement’s logical test for lowercase
letters:

        if (toupper(userInput) == 'Y') // only need to test for upper case
            { printf("yes\n"); }
        else
            { printf("no\n"); }

*/


/*
ANOTHER EXPLANATION SEARCHED ON INTERNET:

In C, the toupper() function is used to convert lowercase alphabets to uppercase letters. When a lowercase alphabet
is passed to the toupper() function it converts it to uppercase. When an uppercase alphabet is passed to the function
it returns the same alphabet.
*/

/* COMPLETE RESUME UNTIL NOW:

#include <ctype.h>

isalpha()
isdigit()
islower()
isupper()

tolower()
toupper()
