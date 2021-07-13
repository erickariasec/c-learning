// This is the counter version using for loop.

#include <stdio.h>

main()
{

    /*
    int ctr = 1;
        while (ctr <= 5)
        {
               printf("Counter is at %d.\n", ctr);
               ctr++;
        }
    */



    int ctr = 0;

    for (ctr = 1; ctr <= 5; ctr++)
    {
        printf("Counter is at %d.\n", ctr);
    }



    /*
    for (ctr = 4; ctr >= 1; ctr--)
    {
        printf("Counter is at %d.\n", ctr);
    }
    */

    return 0;

}

/* When the for begins, the startExpression, which is ctr = 1;, executes. The startExpression is executed only once
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

*/
