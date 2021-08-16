// This is my first practice using bubble sort.

// Create a list of 5 numbers and then order them.

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int nums[5] = {84, 12, 105, 47, 368};
    int aux, ctr, inner, outer, didSwap;
    aux = 0;

    printf("This is the list of 5 numbers:\n");
    for (ctr = 0; ctr < 5; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // SORT NUMBERS

    for (outer = 0; outer < 4; outer++)
    {
        didSwap = 0; //Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 5; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                aux = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = aux;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    printf("And here is the sort list of numbers:\n");
    for (ctr = 0; ctr < 5; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    return 0;
}
