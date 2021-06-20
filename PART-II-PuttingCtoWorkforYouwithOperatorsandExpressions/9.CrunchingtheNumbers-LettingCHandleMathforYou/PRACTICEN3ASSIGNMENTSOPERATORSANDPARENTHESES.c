// We are going to write a program that calculates your eating rice average.

#include <stdio.h>

main()
{

    // GENERAL VARIABLES AVERAGE
    int genAverageRicePerDay = 70;
    int fatherAverageRicePerDay, motherAverageRicePerDay, child1AverageRicePerDay, child2AverageRicePerDay;
    int fatherAverageRicePerWeek, motherAverageRicePerWeek, child1AverageRicePerWeek, child2AverageRicePerWeek;
    float familyAverageRicePerDay, familyAverageRicePerWeek, familyAverageRicePerMonth, riceDeltaPerDay, percentDiffPerDay;

    fatherAverageRicePerDay = 72;
    motherAverageRicePerDay = child1AverageRicePerDay = 69;
    child2AverageRicePerDay = 70;


    // USERS VARIABLES AVERAGE
    float yourFatherAverageRicePerDay, yourMotherAverageRicePerDay, yourBrotherAverageRicePerDay, yourAverageRicePerDay;
    float yourFatherAverageRicePerWeek, yourMotherAverageRicePerWeek, yourBrotherAverageRicePerWeek, yourAverageRicePerWeek;
    float yourFamilyAverageRicePerDay, yourFamilyAverageRicePerWeek, yourFamilyAverageRicePerMonth, riceDeltaPerWeek, percentDiffPerWeek;
    float riceDeltaPerMonth, percentDiffPerMonth;



    // Questions
    printf("\n\n\t\t\t\tAverage amount of rice a person eats per day = %d\n\n", genAverageRicePerDay);
    printf("How many grams of rice on average your father consume per day? (Enter a decimal number XXX.XX in this format)\n");
    scanf(" %f", &yourFatherAverageRicePerDay);

    printf("\nHow many grams of rice on average your mother consume per day? (Enter a decimal number XXX.XX in this format)\n");
    scanf(" %f", &yourMotherAverageRicePerDay);

    printf("\nHow many grams of rice on average your brother consume per day? (Enter a decimal number XXX.XX in this format)\n");
    scanf(" %f", &yourBrotherAverageRicePerDay);

    printf("\nHow many grams of rice on average you consume per day? (Enter a decimal number XXX.XX in this format)\n");
    scanf(" %f", &yourAverageRicePerDay);



    // Results
    printf("\n\n\n\t\t\t\t\t\tYOUR RESULTS");
    printf("\n\t\t\t\t\t\t------------");

    // Calculate My Family Average Per Day
    yourFamilyAverageRicePerDay = ((yourFatherAverageRicePerDay + yourMotherAverageRicePerDay + yourBrotherAverageRicePerDay + yourAverageRicePerDay) / 4);
    printf("\n\n\nYour family eats an average of %.2f grams of rice per day.\a", yourFamilyAverageRicePerDay);

    // Calculate General Family Average Per Day
    familyAverageRicePerDay = ((fatherAverageRicePerDay + motherAverageRicePerDay + child1AverageRicePerDay + child2AverageRicePerDay) / 4);
    printf("\nA normal family eats an average of %.2f grams of rice per day.", familyAverageRicePerDay);

    // Calculate the grams that are exceeding the average per day
    riceDeltaPerDay = yourFamilyAverageRicePerDay - familyAverageRicePerDay;
    printf("\nThat means that your family is eating %.2f grams more than the normal family average.", riceDeltaPerDay);

    // Calculate the percentage your family is eating more per day
    percentDiffPerDay = ((yourFamilyAverageRicePerDay * 100) / familyAverageRicePerDay) - 100;
    printf("\nYour family is eating %.2f percent more than the normal family average.\n\n", percentDiffPerDay);



    // Calculate weekly
    yourFamilyAverageRicePerWeek = yourFamilyAverageRicePerDay * 7;
    familyAverageRicePerWeek = familyAverageRicePerDay * 7;
    riceDeltaPerWeek = yourFamilyAverageRicePerWeek - familyAverageRicePerWeek;
    percentDiffPerWeek = ((yourFamilyAverageRicePerWeek * 100) / familyAverageRicePerWeek) - 100;

    // Calculate monthly
    yourFamilyAverageRicePerMonth = yourFamilyAverageRicePerDay * 30;
    familyAverageRicePerMonth = familyAverageRicePerDay * 30;
    riceDeltaPerMonth = yourFamilyAverageRicePerMonth - familyAverageRicePerMonth;
    percentDiffPerMonth = ((yourFamilyAverageRicePerMonth * 100) / familyAverageRicePerMonth) - 100;

    // Week Results
    printf("\nYour family eats an average of %.2f grams of rice per week.\n", yourFamilyAverageRicePerWeek);

    printf("A normal family eats an average of %.2f grams of rice per week.\n", familyAverageRicePerWeek);

    printf("Weekly your family eats %.2f grams more than the normal family average\n", riceDeltaPerWeek);

    printf("That means that weekly your family eats %.2f percent more than the normal family average\n\n", percentDiffPerWeek);


    // Month Results
    printf("\nYour family eats an average of %.2f grams of rice per month.\n", yourFamilyAverageRicePerMonth);

    printf("A normal family eats an average of %.2f grams of rice per month.\n", familyAverageRicePerMonth);

    printf("Monthly your family eats %.2f grams more than the normal family average\n", riceDeltaPerMonth);

    printf("That means that monthly your family eats %.2f percent more than the normal family average.\n\n", percentDiffPerWeek);


    return 0;
}
