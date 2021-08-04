// CAR YARD AVERAGE MANAGEMENT FOR CEO's

/*
Simple Program to calculate car average in each car yard.
You will have 5 car yards.
*/

#include <stdio.h>

main()

{
    // SET UP VARIABLES
    char name[20];
    int numCars[5] = {200, 150};
    int totalCars = 0;
    int carYardCtr;
    float avgCars;

    printf("\n\n\t\t\t\t\t\tCAR YARD AVERAGE MANAGEMENT\n");
    printf("\t\t\t\t\t\t\tFOR CEO\'s\n");
    printf("\t\t\t\t\t\t\t---------\n\n\n");

    printf("Enter your name: ");
    gets(name);

    printf("\nWelcome to Car Yard Average Management %s\n\n", name);

    for (carYardCtr = 2; carYardCtr < 5; carYardCtr++)
    {
        printf("\nHow many cars do you have in car yard %d?\n", carYardCtr+1);
        scanf(" %d", &numCars[carYardCtr]);
    }

    for (carYardCtr = 0; carYardCtr < 5; carYardCtr++)
    {
        totalCars += numCars[carYardCtr];
    }

    avgCars = ((float)totalCars/5);

    printf("\nYou have an average of cars of %.2f between all your car yards %s!\a\n\n", avgCars, name);
    return 0;
}
