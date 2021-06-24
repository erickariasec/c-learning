/*  I am going to create a program that will help you remember how much did you waste, specially when a company doesn´t
    give your sales check / invoice  */

/* If you spend more than $10 you will receive this message "CONGRATULATIONS, YOU JUST WON 10 ORANGES!" */

#include <stdio.h>
#define SALESTAX .12
#define GIFT_VALUE_REQUIRED 10

main()
{
    // Set up variables
    int numApples, numOranges, numTomatoes, totalFruits;
    float applePrice, totalApplePrice, orangePrice, totalOrangePrice, tomatoPrice, totalTomatoPrice, beforeTaxes, netSales;

    // MARIA'S FRUIT STORE
    #include "empoweringMariaFruitStore.h"

    printf("\n\n\t\t\t\t\t\t\t APP\n");
    printf("\n\t\t\t\t\t\tREMEMBER TOTAL PRICES\n");
    printf("\t\t\t\t\t\t---------------------\n\n");

    printf("\nHow many Apples did you buy?\n");
    scanf(" %d", &numApples);
    printf("How much did each apple cost you? (enter in $XX.XX format)\n");
    scanf(" $%f", &applePrice);

    printf("\nHow many Oranges did you buy?\n");
    scanf(" %d", &numOranges);
    printf("How much did each orange cost you? (enter in $XX.XX format)\n");
    scanf(" $%f", &orangePrice);

    printf("\nHow many Tomatoes did you buy?\n");
    scanf(" %d", &numTomatoes);
    printf("How much did each tomato cost you? (enter in $XX.XX format)\n");
    scanf(" $%f", &tomatoPrice);

    // Compute the prices
    totalApplePrice = numApples * applePrice;
    totalOrangePrice = numOranges * orangePrice;
    totalTomatoPrice = numTomatoes * tomatoPrice;
    beforeTaxes = totalApplePrice + totalOrangePrice + totalTomatoPrice;
    netSales = beforeTaxes + (beforeTaxes * SALESTAX);
    totalFruits = numApples + numOranges + numTomatoes;

    printf("\n\n\n\nYou bought in total %d fruits.\n\a", totalFruits);
    printf("\nYou spent $%.2f on %d Apples, $%.2f on %d Oranges and $%.2f on %d Tomatoes.\n\n", totalApplePrice, numApples, totalOrangePrice, numOranges, totalTomatoPrice, numTomatoes);
    printf("Which gives a total result without taxes of $%.2f\n\n", beforeTaxes); // Total Without taxes
    printf("And what you totally spent on those %d fruits including taxes is $%.2f\n\n\n", totalFruits, netSales); // Total Including Taxes
        if (netSales >= GIFT_VALUE_REQUIRED)
        {
            printf("CONGRATULATIONS, YOU JUST WON 10 ORANGES!\n\n\n");
        }

    printf("It\'s a pleasure to help you solving these problems!\n\nTHANKS!\n\n"); // Gratefulness
    return 0;
}
