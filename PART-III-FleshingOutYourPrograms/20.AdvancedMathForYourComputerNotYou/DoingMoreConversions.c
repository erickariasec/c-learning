// DOING MORE CONVERSIONS

/*

fabs()

The fabs() function returns the floating-point absolute value.
The absolute value of a number, whether it is negative or positive, is the positive version of the number.

Both of these printf() functions print 25:

printf("Absolute value of 25.0 is %.0f.\n", fabs(25.0));
printf("Absolute value of -25.0 is %.0f.\n", fabs(-25.0));

The floating-point answers print without decimal places because of the .0 inside the %f conversion codes.


Absolute values are useful for computing differences in ages, weights, and distances.
For example, the difference between two people’s ages is always a positive number, no matter how you subtract one
from the other.
*/


/*

pow()       sqrt()

The pow() function raises a value to a power.
The sqrt() function returns the square root of a value.

You can’t compute the square root of a negative number. The fabs() function can help ensure that you don’t try
to do so by converting the number to a positive value before you compute the square root.

    If a C programmer does this:                A mathematician does this:
    ----------------------------                --------------------------
           x = pow(4, 3);                               x = 4³*³*³
                                                             _____
           x = sqrt(value);                             x = √value


The following code prints the value of 10 raised to the third power and the square root of 64:

        printf("10 raised to the third power is %.0f.\n", pow(10.0, 3.0));
        printf("The square root of 64 is %.0f.\n", sqrt(64));

Here is the output of these printf() functions:

        10 raised to the 3rd power is 1000.
        The square root of 64 is 8.
*/


/*
RESUME:

#include <math.h>
#include <stdio.h>

fabs() // Returns absolute value (stores positive version number) (ex. -25.56 -> 25.56)

pow() // Raises a value to a power (ex. 4³ = 64)
sqrt() // Square root of a value (ex. √81 = 9)
floor() // Approximate to the lower value (ex. 18.5 stores 18)
ceil() // Approximate to the higher value (ex. 18.5 stores 19)
