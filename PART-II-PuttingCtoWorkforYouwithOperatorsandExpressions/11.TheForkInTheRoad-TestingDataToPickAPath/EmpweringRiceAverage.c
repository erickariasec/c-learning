// We are going to write a program that calculates your eating rice average.
// ADDING CONDITIONAL IF TO THE PROGRAM

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

    // Calculate the grams that are exceeding the average per day. CONDITIONALS
    riceDeltaPerDay = yourFamilyAverageRicePerDay - familyAverageRicePerDay;
        if (yourFamilyAverageRicePerDay > familyAverageRicePerDay)
        {
            printf("\nThat means that your family is eating %.2f grams more than the normal family average.", riceDeltaPerDay);
        }
        if (yourFamilyAverageRicePerDay < familyAverageRicePerDay)
        {
            printf("\nThat means that your family is eating %.2f grams less than the normal family average.", riceDeltaPerDay);
        }

    // Calculate the percentage your family is eating more per day. CONDITIONALS
    percentDiffPerDay = ((yourFamilyAverageRicePerDay * 100) / familyAverageRicePerDay) - 100;
        if (yourFamilyAverageRicePerDay < familyAverageRicePerDay)
        {
            printf("\nYour family is eating %.2f percent less than the normal family average.\n\n", percentDiffPerDay);
        }
        if (yourFamilyAverageRicePerDay > familyAverageRicePerDay)
        {
            printf("\nYour family is eating %.2f percent more than the normal family average.\n\n", percentDiffPerDay);
        }





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

        // Calculate My Family Average Per Week
    printf("\nYour family eats an average of %.2f grams of rice per week.\n", yourFamilyAverageRicePerWeek);

        // Calculate General Family Average Per Week.
    printf("A normal family eats an average of %.2f grams of rice per week.\n", familyAverageRicePerWeek);

        // Calculate the grams that are exceeding the average per week. CONDITIONALS
        if (yourFamilyAverageRicePerWeek > familyAverageRicePerWeek)
        {
            printf("Weekly your family eats %.2f grams more than the normal family average.", riceDeltaPerWeek);
        }
        if (yourFamilyAverageRicePerWeek < familyAverageRicePerWeek)
        {
            printf("Weekly your family eats %.2f grams less than the normal family average.", riceDeltaPerWeek);
        }

        // Calculate the percentage your family is eating more per week. CONDITIONALS
        if (yourFamilyAverageRicePerWeek < familyAverageRicePerWeek)
        {
            printf("\nThat means that weekly your family eats %.2f percent less than the normal family average.\n\n", percentDiffPerWeek);
        }
        if (yourFamilyAverageRicePerWeek > familyAverageRicePerWeek)
        {
            printf("\nYour family is eating %.2f percent more than the normal family average.\n\n", percentDiffPerWeek);
        }


    // Month Results

        // Calculate My Family Average Per Month.
    printf("\nYour family eats an average of %.2f grams of rice per month.\n", yourFamilyAverageRicePerMonth);

        // Calculate General Family Average Per Month
    printf("A normal family eats an average of %.2f grams of rice per month.\n", familyAverageRicePerMonth);

        // Calculate the grams that are exceeding the average per Month. CONDITIONALS
        if (yourFamilyAverageRicePerMonth > familyAverageRicePerMonth)
        {
            printf("Monthly your family eats %.2f grams more than the normal family average.", riceDeltaPerMonth);
        }
        if (yourFamilyAverageRicePerMonth < familyAverageRicePerMonth)
        {
            printf("Monthly your family eats %.2f grams less than the normal family average.", riceDeltaPerMonth);
        }

        // Calculate the percentage your family is eating more per Month. CONDITIONALS
        if (yourFamilyAverageRicePerMonth < familyAverageRicePerMonth)
        {
            printf("\nThat means that monthly your family eats %.2f percent less than the normal family average.\n\n", percentDiffPerMonth);
        }
        if (yourFamilyAverageRicePerMonth > familyAverageRicePerMonth)
        {
            printf("\nThat means that monthly your family eats %.2f percent more than the normal family average.\n\n", percentDiffPerMonth);
        }

    return 0;
}
