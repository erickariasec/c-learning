// GOODBYE IF...ELSE; HELLO, CONDITIONAL

/* The conditional operator is the only C operator that requires three arguments.
Although the format of the conditional operator looks complex, you will see that it streamlines some logic and is
actually straightforward to use.

The conditional operator looks like this: ?:. Here is its format:

    relation ? trueStatement : falseStatement;

-The relation is any relational test, such as age >= 21 or sales <= 25000.0.
You also can combine the relational operators with the logical operators.
- The trueStatement is any valid C statement-
- The falseStatement is also any valid C statement.

Here is an example of a conditional operator:

    (total <= 3850.0) ? (total *= 1.10): (total *= 1.05);

         relation     ?  trueStatement :  falseStatement;

The parentheses are not required, but they do help group the three parts of the conditional operator so that you
can see them easier.

If the test in the first set of parentheses is true, the trueStatement executes. If the test in the first set of
parentheses is false, the falseStatement executes. The conditional operator you just saw does exactly the same
thing as this if...else statement:

    if (total <= 3850.0
       { total *= 1.10; }
    else
       { total *= 1.05; )

Just about any if...else statement can be rewritten as a conditional statement. The conditional requires less typing,
you won’t accidentally leave off a brace somewhere, and the conditional runs more efficiently than an if...else because
it compiles into more compact code.

TIP: The format of the conditional operator is obvious when you think of it like this: The question mark asks a
question. Keeping this in mind, you could state the earlier example as follows: Is the total <= 3850.0? If so, do
the first thing; otherwise, do the second.

C programmers don’t like the redundancy you saw in the earlier use of the conditional operator. As you can see,
the total variable appears twice. Both times, it is being assigned a value. When you face such a situation, take
the assignment out of the conditional operator’s statements:

    total *= (total <= 3850.0) ? (1.10): (1.05);

Don’t replace every single if...else with a conditional operator. Many times, if...else is more readable, and
some conditional statements are just too complex to squeeze easily into a conditional operator. However, when a
simple if...else is all that’s needed, the conditional operator provides a nice alternative.
*/


//----------------------------------------------------------------------------------------------------------------------



/* The conditional operator offers one additional advantage over if: The conditional often can appear in places
where if can’t go. The following print(f) prints a trailing s if the number of pears is more than 1:

    printf("I ate %d pear%s\n", numPear, (numPear>1) ? ("s.") : ("."));
