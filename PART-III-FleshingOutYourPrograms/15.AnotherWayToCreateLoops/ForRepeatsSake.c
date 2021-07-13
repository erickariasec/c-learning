// FOR LOOP

/*
A for loop offers more control than while and do-while.
You can specify exactly how many times you want to loop; with while loops, you must continue looping as long as
a condition is true.

Sometimes one loop fits one program’s requirements better than another.
*/



// FOR REPEAT’S SAKE!

/*
for loop is important for controlling repeating sections of code.

The format of for is a little strange:

        for (startExpression; testExpression; countExpression)
        { block of one or more C statements; }

Perhaps a short example with actual code is easier to understand:

        for (ctr = 1; ctr <= 5; ctr++)
        {
            printf("Counter is at %d.\n", ctr);
        }
        // For when ctr is on 1, increment ctr, while ctr <= 5.

When the for begins, the startExpression, which is ctr = 1;, executes. The startExpression is executed only once
in any for loop. The testExpression is then tested. In this example, the testExpression is ctr<= 5;. If it is
true—and it will be true the first time in this code—the body of the for loop executes. When the body of the loop
finishes, the countExpression is executed (ctr is incremented).

The initial expression, ctr = 1;, is completed before the loop begins.


Here is the very same loop written as a while statement:

        ctr = 1;
        while (ctr <= 5)
        {
               printf("Counter is at %d.\n", ctr);
               ctr++;
        }
