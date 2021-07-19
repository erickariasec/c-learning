// BREAK EXAMPLE EXPLANATION

/* break simply offers an early termination of a while, do-while, or for loop. break can’t exit from if, which isn’t
a loop statement. */


#include <stdio.h>
main()
{
    // SET UP VARIABLES
    int i, num;

                printf("How many numbers do you want to see?");
                scanf(" %d", &num);
                for (i = 1; i < 10; i++)
                    {
                        printf("Counting up...%d\n", i);
                        if (i == num)
                        {
                            break;
                        }
                    }
}
                    // Rest of program follows.







/*


                printf("How many numbers do you want to see?");
                scanf(" %d", %num);
                for (i = 1; i < 10; i++)
           |------> {
           |            printf("Counting up...%d\n", i);
   Normal  |            if (i == num)
   flow of |                {
   the loop|                    break; --------------|
           |                }                        | If breaks
           |------  }                                | executes
                    // Rest of program follows.  <---|


*/
