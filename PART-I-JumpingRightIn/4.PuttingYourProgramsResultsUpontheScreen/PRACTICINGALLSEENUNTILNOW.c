/* Here is an example of everything we have seen until now */

#include <stdio.h>

main()

{
    /* These are the Instructions */
    printf("First of all, we are going to build an Online Store.\n");
    printf("Wea\b\'re going to sell %d items on Amazon today.\n", 10);
    printf("Each item costs %c%.2f", '$', 7.990000);

    printf("\n\n\n\t\t\tSMARTLINEZ\b\'s STORE\n\n\n");

    printf("UNITS\t\tITEMS\t\t\tUNIT PRICE\tTOTAL PRICE\n");
    printf("%d\t\t%s\t%.2f\t\t%.2f\n", 3, "Portable Charger", 7.990000, 23.970000);
    printf("%d\t\t%s\t%.2f\t\t%.2f\n", 5, "Apple Headphones", 7.990000, 39.950000);
    printf("%d\t\t%s\t%.2f\t\t%.2f\n", 2, "Cell Phone Cases", 7.990000, 15.980000);
    printf("\t\t\t\t\t\t\t---------\n"); //Separator
    printf("\t\t\t\t\t\t\t%c%.2f\n\n", '$', 79.900000);

    printf("\t\t     Thanks for your purchase\n\n\a");

    return 0;
}

