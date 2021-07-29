/* Unless you need trignonometric and advanced math functions, you might not find a use for many of the functions
described in this chapter. */

/* Some people program in C for years and never need many of these functions. You should read this chapter’s material
to get an idea of what C can accomplish so you’ll know what’s available if you ever do need these powerful functions. */


// PRACTICING YOUR MATH

/*
#include <math.h>

All the functions this chapter describes require the use of the math.h header file.
Be sure to include math.h along with stdio.h if you use a math function.

floor()     ceil()

The floor() and ceil() functions are called the floor and ceiling functions.
They “push down” and “push up” nonintegers to their next-lower or next-higher integer values.

For example, if you wanted to compute how many dollar bills were in a certain amount of change (that includes
dollars and cents), you could use floor() on the amount. The following code does just that:

        change = amtPaid – cost; // These are all floating-point values
        dollars = floor(change);
        printf("The change includes %f dollar bills.\n", dollars);

Although ceil() and floor() convert their arguments to integers, each function returns a float value. That’s why
the dollars variable was printed using the %f conversion code.

The ceil() function (which is the opposite of floor()) finds the next-highest integer. Both ceil() and floor() work
with negative values, too, as the following few lines show:

        lowVal1 = floor(18.5);  // Stores 18.0
        lowVal2 = floor(-18.5);  // Stores -19.0
        hiVal1 = ceil(18.5); // Stores 19.0
        hiVal2 = ceil(-18.5); // Stores =18.0
*/

/*
RESUME:

#include <math.h>
#include <stdio.h>

floor() // Approximate to the lower value (ex. 18.5 stores 18)
ceil() // Aproxima al valor superior (ex. 18.5 stores 19)
