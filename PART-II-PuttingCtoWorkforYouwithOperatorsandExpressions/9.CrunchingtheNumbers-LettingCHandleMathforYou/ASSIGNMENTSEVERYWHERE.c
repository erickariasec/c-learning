// ASSIGNMENTS EVERYWHERE

// Assignment has very low priority in the table, and it associates from right to left.
/* The right-to-left associativity lets you perform an interesting operation: You can assign a value to
more than one variable in the same expression. To assign the value of 9 to 10 different variables, you could
do this:

    a = 9; b = 9; c = 9; d = 9; e = 9; f = 9; g = 9; h = 9; i = 9; j = 9;

but this is easier:

    a = b = c = d = e = f = g = h = i = j = 9;

Because of the right-to-left associativity, C first assigns the 9 to j, then puts the 9 in i, and so on.

C doesn’t initialize variables for you. If you wanted to put 0 in a bunch of variables, a multiple assignment
would do it for you.


Every C expression produces a value. The expression j = 9; does put a 9 in j, but it also results in a
completed value of 9, which is available to store somewhere else, if needed. The fact that every assignment
results in an expression lets you do things like this that you can’t always do in other programming languages:

    a = 5 * (b = 2);  /* Puts a 2 in b and a 10 in a */

