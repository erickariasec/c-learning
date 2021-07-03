// THE SMALL-CHANGE OPERATORS: ++ AND --

/* Although the conditional operator works on three arguments, the increment and decrement operators work on only
one. The increment operator adds 1 to a variable, and the decrement operator subtracts 1 from a variable. */

// Incrementing and decrementing variables are things you would need to do if you were counting items.

// The increment operator is ++, and the decrement operator is --.


/*
If you want to add 1 to the variable count, here’s how you do it:

        count++;

You also can do this:

        ++count;

The decrement operator does the same thing, except that the 1 is subtracted from the variable. You can do this:

        count--;

You also can do this:

        --count;
*/

/* As you can see, the operators can go on either side of the variable. If the operator is on the left, it’s
called a prefix increment or prefix decrement operator. If the operator is on the right, it’s known as a postfix
increment or postfix decrement operator. */


/* Never apply an increment or decrement operator to a literal constant or an expression. Only variables can be
incremented or decremented.

You will never see this:

        --14;  //  DON´T DO THIS


/* Prefix and postfix operators produce identical results when used by themselves. Only when you combine
them with other expressions does a small “gotcha” appears.

Consider the following code:

        int i = 2, j = 5, n;
        n = ++i * j;

The ++ ensures that i is always incremented, so you know that i becomes 3.

If the ++ or -- is a prefix, C computes it before anything else on the line.

If the ++ or -- is a postfix, C computes it after everything else on the line finishes.

Because the ++ in the preceding code is a prefix, i increments to 3 before being multiplied by j. */


/* The following statement increments i after multiplying i by j and storing the answer in n:

        n = i++ * j;  /* Puts 10 in n and 3 in i

Being able to increment a variable in the same expression as you use the variable means less work on the
programmer’s part.

The preceding statement replaces the following two statements that you would have to write in other
programming languages:

        n = i * j;
                                            ==                          n = i++ * j;
        i = i + 1;

*/


/*
The ++ and -- operators are extremely efficient.

If you care about such things (most of us don’t), ++ and -- compile into only one machine language statement,
whereas adding or subtracting 1 using +1 or -1 doesn’t always compile so efficiently.
