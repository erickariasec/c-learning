/*
   C automatically adds the null zero
   The string terminator is sometimes called \0 (backslash zero).
   '0' is the character zero, and '\0' is the string terminator.

   (a byte is a single memory location).

    The null zero that is part of the string "Crazy" takes one of those six memory locations.
    crazy\0
    A string always ends with a null zero in memory
*/

//------------------------------------------------------------------------------------------------------

/*
    THE LENGTH OF STRINGS
    The null zero is never counted when determining the length of a string.
    When counting the length of strings, remember that you must account for every space
*/


//------------------------------------------------------------------------------------------------------


/*
    CHARACTER ARRAYS: LISTS OF CHARACTERS

     All the data types—int, float, char, and the rest—have corresponding array types.

     An array is nothing more than a list of variables of the same data type.

     Before you use a character array to hold a string, you must tell C that you need a
     character array in the same place you would tell C that you need any other kind of variable.

     Use brackets ([ and ]) after the array name, along with a number indicating the maximum
     number of characters the string will hold.

     You always have to reserve enough character array space to hold the longest string you will
     need to hold, plus the string terminator. You can define more array characters than
     needed, but not fewer than you need.
*/


#include <stdio.h>

main()
{

    /* char month[10]; */  /* Defines a character array */  /* If you needed a place to hold month names, you
                                                         could define a character array called month like this

                                                        /* Array definitions are easy. Take away the 10 and the
                                                         brackets, and you have a regular character variable. */

                                                        /* Adding the brackets with the 10 tells C that you
                                                         need 10 character variables, each following the other
                                                         in a list named month. */

                                                        /* The reason 10 was used when defining the array is that
                                                         the longest month name, September, has nine characters.
                                                         The tenth character is for, you guessed it, the null zero. */



    /* If you want, you can store a string value in the array at the same time you define the array: */

    char month[10] = "January";  /* Defines a character array */


/*

    Each individual piece of an array is called an element.

    The month array has 10 elements.

    Subscripts are numbers that you specify inside brackets that refer to each of the array elements.

    [0][1][2][3][4][5][6][7][8][9]
     J  a  n  u  a  r  y \0  ?  ?

    Each element in a character array is a character.
    The combination of characters—the array or list of characters—holds the entire string.


*/

    printf("The month is %s", month);

    // If you define an array and initialize the array at the same time, you don’t have to put the number in brackets.

    /*
    char month[8] = "January";
    char month[] = "January";
    */

//------------------------------------------------------------------------------------------------------

    return 0;
}
