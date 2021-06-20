// totalSales = localSales + internationalSales - salesReturns;
// C computes the answer and then stores that answer in totalSales.

// If you want to subtract a negative value, be sure to put a space between the minus signs, like this:
// newValue = oldValue - -factor;
// If you omit the space, C thinks you’re using another operator, --, called the decrement operator.

/*

#include <stdio.h>

main()
{
    int age = 22;
    printf("In 3 years, I'll be %d years old.\n", age + 3);

}

*/

// If you want to multiply and divide, you can do so by using the * and / symbols
// newFactor = fact * 1.2 / 0.5;




// ------------------------------------------------------------------------------------------------------------




// Example program #1 from Chapter 9 of
// Absolute Beginner's Guide to C, 3rd Edition
// File Chapter9ex1.c

/* This is a sample program that demonstrates math operators, and
the different types of division. */

#include <stdio.h>


main()
{
    // Two sets of equivalent variables, with one set
    // floating-point and the other integer

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    // Using two float variables creates an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x /y; //Take 2 creates an answer of 3.0
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    // This will also be 3, as it truncates and doesn't round up
    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

    intAnswer = x % y; // This calculates the remainder (4)
    printf("%d modulus (i.e. remainder of) %d equals %d\n\n\n\n", x, y,
    intAnswer);
    // ansMod = x % y;  /* 4 is the remainder of 19 / 5 */
    // You can’t use % between anything but integer data types.



    // MY PRACTICE

    float c = 11.0;
    float d = 4.0;
    float myfloatAnswer;

    int p = 11;
    int q = 4;
    int myintAnswer;

    myfloatAnswer = c / d; // Dividiendo con punto decimal, me arrojará respuesta decimal.
    printf("%.1f divided by %.1f equals %.1f\n", c, d, myfloatAnswer);

    myfloatAnswer = p / q; // No redondea porque estoy dividiendo enteros, a pesar de solicitar un número decimal como respuesta, me seguirá arrojando un número entero.
    printf("%d divided by %d equals %.1f\n", p, q, myfloatAnswer);

    myintAnswer = p / q;
    printf("%d divided by %d equals %d\n", p, q, myintAnswer); // Al dividir enteros me arroja un valor entero sin redonderar, ya que estoy solicitando un número entero.

    myintAnswer = p % q; // This calculates the remider (residuo) (3)
    printf("%d modulus (es decir, el residuo de) %d equals %d\n\n", p, q, myintAnswer);

    return 0;
}


/*  You now know the three ways C divides values: regular division if a float is on either or both sides of
the /, integer division if an integer is on both sides of the /, and modulus if the % operator is used between
two integers.  */
