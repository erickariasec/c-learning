/*
    -----------------------------------------------------
    |  CONVERSION CHARACTERS      |     DESCRIPTION     |
    |-----------------------------|---------------------|
    |  %d                         |     Integer         |
    |-----------------------------|---------------------|
    |  %f                         |     Floating-point  |
    |-----------------------------|---------------------|
    |  %c                         |     Character       |
    |-----------------------------|---------------------|
    |  %s                         |     String          |
    -----------------------------------------------------

    Integer:        Integers are whole numbers that can have both zero, positive and negative values but no decimal
                    values. For example, 0 , -5 , 10. We can use int for declaring an integer variable.

    Floating-point: A "floating-point constant" is a decimal number that represents a signed real number. The
                    representation of a signed real number includes an integer portion, a fractional portion, and an
                    exponent.

    Character:      Characters are simple alphabets like a, b, c, d...., A, B, C, D,....., but with an exception. In
                    computer programming, any single digit number like 0, 1, 2,....and special characters like $, %, +, -...

    String:         A string in C (also known as C string) is an array of characters, followed by a NULL character.
                    To represent a string, a set of characters are enclosed within double quotes (").
*/

#include <stdio.h>

main()

{
    printf("%d roses cost %.2f per %d\n", 24, 19.95, 12);    // Example N°1
    //      24 roses cost 19.95 per 12

    /* You can control how C prints floating-point values by placing a period (.) and a number between
    the % and the f of the floating-point conversion character. The number you place determines the number
    of decimal places your floating-point number prints to. */



    printf("%s %d %f %c\n", "Sam", 14, -8.76, 'X');         // Example N°2
    /* The string Sam needs quotation marks, as do all strings, and the character X needs
    single quotation marks, as do all characters */



    printf("%f  %.3f  %.2f  %.1f", 4.5678, 4.5678, 4.5678, 4.5678);
    /* You can control how C prints floating-point values by placing a period (.) and a number between
    the % and the f of the floating-point conversion character. The number you place determines the number
    of decimal places your floating-point number prints to. */

    return 0;
}
