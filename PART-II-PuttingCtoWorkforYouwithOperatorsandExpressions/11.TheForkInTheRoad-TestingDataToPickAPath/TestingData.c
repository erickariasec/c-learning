// TESTING DATA

// if: if lets your programs make decisions and execute certain statements based on the results of those decisions.
// If something is true, do one thing; otherwise, do something else.
// Combined with if, relational operators make C a powerful data-processing language.

/*

--------------------------------------------------------------------
RELATIONAL OPERATOR             DESCRIPTION
--------------------------------------------------------------------
    ==                          Equal to
    >                           Greater than
    <                           Less than
    >=                          Greater than or equal to
    <=                          Less than or equal to
    !=                          Not equal to
--------------------------------------------------------------------

*/

/* Relational operators compare two values. You always put a variable, literal, or expression—or a combination of
any two of them—on either side of a relational operator. */

// A regular operator produces a mathematical result.
// A relational operator produces a true or false result.


/*
    int i = 5;
    int j = 10;
    int k = 15;
    int l = 5;
the following statements are true:
    i == l;
    j < k;
    k > i;
    j != l;
The following statements are not true, so they are false:
    i > j;
    k < j;
    k == l;
*/

/* To tell the difference between = and ==, remember that you need two equals signs to double-check whether
something is equal. */

/* Don’t compare a character to a float. If you have to compare two unlike data values, use a typecast to keep
the values the same data type. */



/*
Every time C evaluates a relational operator, a value of 1 or 0 is produced. True always results in 1, and
false always results in 0.

a = (4 < 10);  // (4 < 10) is true, so a 1 is put in a
b = (8 == 9);  // (8 == 9) is false, so a 0 is put in b
*/

#include <stdio.h>

main()
{
    int a, b;

    a = (4 < 10);  // (4 < 10) is true, so a 1 is put in a
    b = (8 == 9);  // (8 == 9) is false, so a 0 is put in b

    printf("If %d is true, %d is false", a, b);
}




