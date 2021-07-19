// TAKE A BREAK

/* The break statement rarely, if ever, appears on a line by itself. Typically, break appears in the body of an if
statement. The reason for this will be made clear shortly. Here is the format of break:

        break;

Break always appear inside a loop.
The purpose of break is to terminate the current loop.
When a loop ends, the code following the body of the loop takes over.
When break appears inside a loop’s body, break terminates that loop immediately, and the rest of the program continues. */

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int i;

    for (i=0; i < 10; i++)
    {
           printf("%d ", i);
           if (i == 4)
           {
                  break;
           }
    }
// Rest of program would follow.
}
