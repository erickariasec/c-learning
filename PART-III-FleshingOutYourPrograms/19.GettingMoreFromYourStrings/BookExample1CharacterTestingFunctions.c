/* Here’s a quick little program that gets a username and password and then uses the functions described in this
chapter to check whether the password has an uppercase letter, a lowercase letter, and a number in it. If a user
has all three, the program congratulates him or her for selecting a password with enough variety to make it harder
to crack. If the password entered does not have all three categories, the program suggests that the user consider a
stronger password. */



// Example program #1 from Chapter 19 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter19ex1.c

/* This program asks a user for a username and a password. It tests
whether their password has an uppercase letter, lowercase letter,
and a digit. If it does, the program congratulates their selection.
If not, it suggests they might want to consider a password with more
variety for the sake of security. */

// stdio.h is needed for printf() and scanf()
// string.h is needed for strlen()
// ctype.h is needed for isdigit, isupper, and islower

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
       int i;
       int hasUpper, hasLower, hasDigit;
       char user[25], password[25];

    // Initialize all three test variables to 0 i.e. false

       hasUpper = hasLower = hasDigit = 0;

       printf("What is your username? ");
       scanf(" %s", user);

       printf("Please create a password: ");
       scanf(" %s", password);

       // This loop goes through each character of the password and
       // tests
       // whether it is a digit, upppercase letter, then lowercase
       // letter.

       for (i = 0; i < strlen(password) ; i++ )
       {
          if (isdigit(password[i]))
          {
              hasDigit = 1; // 1 means true, 0 means false
              continue;
          }
          if (isupper(password[i]))
          {
              hasUpper = 1; // 1 means true, 0 means false
              continue;
          }
          if (islower(password[i]))
          {
              hasLower = 1; // 1 means true, 0 means false
          }
      }

        /* The if portion will only execute if all three variables
below are 1, and the variables will only equal 1 if the appropriate
characters were each found */
 if ((hasDigit) && (hasUpper) && (hasLower))
            {
            printf("\n\nExcellent work, %s,\n", user);
            printf("Your password has upper and lowercase ");
            printf("letters and a number.");
 } else
 {
            printf("\n\nYou should consider a new password, %s,\n",
              user);
            printf("One that uses upper and lowercase letters ");
            printf("and a number.");
        }

       return(0);

}

/*
This program uses the functions listed in this chapter to check that a password has each of the three types of
characters in an entered password by looping through the password character by character and testing each of the
three types. If a specific character is one of those three types, a variable flag is set to 1 (TRUE in C parlance),
and then the loop moves on.

In the case of the first two tests, after the variable flag (hasDigit or hasUpper) is set to 1, a continue statement
starts the next version of the loop—after the character has been determined to be a digit, there is no need to run
the next two tests (after all, it can’t be more than one category, right?), so for efficiency’s sake, skipping the
subsequent tests makes sense. The last if code section does not need a continue statement because it is already at
the end of the loop.

After all the characters in the password string have been tested, an if statement checks whether all three conditions
were met. If so, it prints a congratulatory message. If not, it prints a different message.

TIP:
Some passwords today also ask for at least one non-letter, non-number character (such as $, !, *, &, and so on).
You could further refine this code to check for those by putting an else at the end of the final islower test. After
all, if a character fails the first three tests, then it fits in this last category.
*/
