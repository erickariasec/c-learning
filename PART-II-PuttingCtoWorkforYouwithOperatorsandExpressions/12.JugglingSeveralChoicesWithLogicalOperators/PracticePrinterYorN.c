/*
As mentioned in the last chapter, if statements can be helpful when ensuring that the user has entered the proper
information your program is looking for. The following section of code asks the user for a Y or N answer. The code
includes an || to ensure that the user enters a correct value.
*/

#include <stdio.h>

main()
{
    // VARIABLE
    char ans;

    printf("Is your printer on (Y/N) ?\n");
    scanf(" %c", &ans); //need an & before the name of your char variable
    if ((ans == 'Y') || (ans == 'N'))
    {
        // Gets here if user typed a correct answer.
        if (ans == 'N')
        {
          printf("*** Turn the printer on now. ***\n");
    }
    }
    else
    {
          printf("You did not enter a Y or N.\n");
    }
    return 0;
}



/*

You can combine more than two relational operators with logical operators, but doing too much in a single statement
can cause confusion. This is a little too much:
    if ((a < 6) || (c >= 3) && (r != 9) || (p <= 1)) {
Try to keep your combined relational tests simple so that your programs remain easy to read and maintain.

*/
