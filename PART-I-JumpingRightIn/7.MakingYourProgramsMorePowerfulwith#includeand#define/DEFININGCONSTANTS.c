/* A C constant is a data value that doesn’t change, like the number 4 or the string "C programming".
The #define preprocessor directive lets you give names to literals. When you give a name to a literal,
the named literal is known in C terminology as a named constant or a defined constant. */

/*

#define CONSTANT constantDefinition                     (Format of #define directive)

*/




/*

#define AGELIMIT 21
#define MYNAME "Paula Holt"
#define PI 3.14159


Every place in the program that the CONSTANT appears, replace it with the constantDefinition.
The first #define just shown instructs C to find every occurrence of the word AGELIMIT and replace it with a 21.


if (employeeAge < AGELIMIT)

if (employeeAge < 21)               (The compiler acts as if you typed this)

*/


/* Use uppercase letters for the defined constant name. This is the one exception in C when uppercase
is not only used, but recommended. */

#include <stdio.h>
#define MY_MOM "Vicky"

main()

{

    char activity1[8] = "cooking";
    char place1[5] = "home";

    printf("%s loves %s at %s.", MY_MOM, activity1, place1);

    return 0;
}
