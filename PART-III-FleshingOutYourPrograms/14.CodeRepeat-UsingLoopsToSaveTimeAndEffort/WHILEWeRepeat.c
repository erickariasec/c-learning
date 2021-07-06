// WHILE WE REPEAT

/*
The while statement always appears at the beginning or end of a loop.
The easiest type of loop that uses while is called the while loop. (The other is called the do...while loop.
You’ll see it a little later.)

Here is the format of while:

        while (condition)
        { block of one or more C statements; }

The condition is a relational test that is exactly like the relational test condition you learned for if.
The block of one or more C statements is called the body of the while.

The body of the while repeats as long as the condition is true.
The body of the if executes if the condition is true.
The body of the if executes only once, however, whereas the body of the while can execute a lot of times.

The formats of the two commands are similar, in that braces are required if the body of the while has more
than one statement.
Even if the body of the while contains only a single statement, you should enclose the body in braces so that
the braces will still be there if you later add statements to the while.
Never put a semicolon after the while’s parenthesis. The semicolon follows only the statements inside the body
of the while.


        Using if:
            if (amount < 25)
            {
                printf("Amount is too small.\n");               <------ Executes only one time
                wrongVal++; MOVE ALONG  ----------                      but only then if amount
            }                                     |                     is less than 25.
            <--------------------------------------

        Using while:
            while (amount < 25)
            {
                printf("Amount is too small.\n");  <-------------       Keeps repeating as long
                wrongVal++;                                     |       as amount is less than
                printf("Try again... What is new amount?\n");   |       25.
                scanf(" %d, &amount");  GO BACK  ----------------
            }

*/
