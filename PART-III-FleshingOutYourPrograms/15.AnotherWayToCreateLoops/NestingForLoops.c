// NESTING FOR LOOPS

// The following code produces an interesting effect:

#include <stdio.h>

main()
{

    // SET UP VARIABLES
    int outer = 0;
    int inner  = 0;


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
