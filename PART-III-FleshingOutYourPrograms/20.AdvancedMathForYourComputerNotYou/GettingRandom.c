// GETTING RANDOM

/*
For games and simulation programs, you often need to generate random values.

    #include <stdlib.h>

    rand()

It returns a random number from 0 to 32767

The rand() function requires the stdlib.h (standard library) header file.
If you want to narrow the random numbers, you can use % (the modulus operator) to do so.

The following expression puts a random number from 1 to 6 in the variable dice:

        dice = (rand() % 5) + 1;  // From 1 to 6

Because a die can have a value from 1 to 6, the modulus operator returns the integer division remainder (0 through 5),
and then a 1 is added to produce a die value.
*/


/*
You must do one crazy thing if you want a truly random value.

To seed the random number generator means to give it an initial base value from which the rand() function can offset
with a random number.

    srand()

Use srand() to seed the random number generator.

The number inside the srand() parentheses must be different every time you run the program, unless you want to produce
the same set of random values.

The trick to giving srand() a different number each run is to put the exact time of day inside the srand() parentheses.

Your computer keeps track of the time of day, down to hundredths of a second. So first declare a time variable, using
the time_t declaration, and then send its address (using the & character at the front of the variable name) to the
srand() function.

    time_t

NOTE:
You might always want a different set of random numbers produced each time a program runs. Games need such randomness.
However, many simulations and scientific studies need to repeat the same set of random numbers. rand() will always do
that if you don’t seed the random number generator.


You must include time.h before seeding the random number generator with the time of day, as done here.

    #include <time.h>

