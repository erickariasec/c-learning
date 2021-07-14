// OUTER AND INNER

// Here we are going to practice the outer and inner part.

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int outer, inner;


    for (outer = 1; outer <= 3; outer++)
    {
       for (inner = 1; inner <= 5; inner++)
       {
              printf("%d ", inner);
       }
       // Print a newline when each inner loop finishes
       printf("\n");
    }
}
