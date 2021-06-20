 /* We are going to travel to Australia, so we have need information, and we are going to practice Escape Sequences,
   Conversion Characters, Variables, Strings, Building Header Files, Including Header Files and Defining Constants */

#include <stdio.h>
#include <string.h>
#include "DefiningTripFly.h"

main()
{

    char animal1[6] = "Koala";
    char animal2[6];
    char animal3[9] = "Kangaroo";
    char animal4[10] = "Cassowary";

    char place2visit1[] = "Sydney";
    char place2visit2[10] = "Melbourne";
    char place2visit3[9] = "Brisbane";
    char place2visit4[6];
    char place2visit5[7] = "Darwin";

    int SydneyPop = 5312471;
    int MelbournePop = 5078598;
    int BrisbanePop = 2360241;
    int PerthPop = 1985221;
    int DarwinPop = 132045;

    int number_of_koalas;
    int number_of_dingos;
    int number_of_kangaroos;
    int number_of_cassowaries;

        animal2[0] = 'D';
        animal2[1] = 'i';
        animal2[2] = 'n';
        animal2[3] = 'g';
        animal2[4] = 'o';
        animal2[5] = '\0';

        strcpy(place2visit4, "Perth");


    printf("\n\t\t\t\t\t\tTRAVELLING TO AUSTRALIA\n\a");
    printf("\t\t\t\t\t---------------------------------------\n\n");
    printf("Australia is one of the most remote countries in the world and, ironically, one of the most popular places to visit,\n"); // Introduction to Australia
    printf("especially among backpackers and budget travelers.\n\n");
    printf("Australia is everything you've dreamed of and more. It's a land of colors and contrasts: from the red, dusty outback to\n");
    printf("the lush, tropical rainforests, with moutains, vineyards, and the most beautiful beaches in the world in between.\n\n"); // Ending Introduction

    printf("We are planning to travel from %s to %s on my momz\b\'s birthday.\n\n", DEPARTURE, DESTINATION);
    printf("%s is our favorite airline and we want to travel with them.\n\n", AIRLINE);
    printf("They are asking us for our personal information, here it is:\n\n\n");

    printf("\t\t\t\t\t\tPASSENGER\'S INFORMATION\n");
    printf("\t\t\t\t\t---------------------------------------\n\n");
    #include "familyInformation.h" // Family Information

    printf("\n\n\t\t\t\t\t\tHOW MUCH IT WILL COST?\n"); // Fly Costs
    printf("\t\t\t\t\t---------------------------------------\n\n\n");
    printf("AIRLINE\t\t\tDEPARTURE\t\t\tARRIVAL\t\t\tDURATION\t\t\tPRICE\n");
    printf("%s\t\t\t%s\t\t\t\t%s\t\t%s\t\t\t$%.2f\n\n\n", AIRLINE, DEPARTURE, DESTINATION, FLIGHT_DURATION, FLIGHT_COST);
    printf("Although it looks really expensive but we want to go. We are 4 members, so we need %d tickets.\n", TICKET_NUMBER);
    printf("It means that we have to pay $%.2f for all of us.\n\n", FLIGHT_COST*4);

    printf("\n\n\t\t\t\t\t\t    PLACES TO VISIT\n"); // Visiting some Places in Australia
    printf("\t\t\t\t\t---------------------------------------\n\n");
    printf("Australia has a lot of places that you must visit when you arrive, this country is known because of wonderful places,\nflora and fauna. Specially fauna is the best of Australia.\n");
    printf("If you like to take pictures and you want to visit beautiful places, here\'s the list of the best ones:\n\n");

    // PLACES INFORMATION

    printf("\tCITY\t\tPOPULATION\t\tKOALAS\t\tDINGOS\t\tKANGAROOS\tCASSOWARIES\n\n");

        // SYDNEY ANIMALS
        number_of_koalas = 256;
        number_of_dingos = 579;
        number_of_kangaroos = 97;
        number_of_cassowaries = 41;
    printf("\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n", place2visit1, SydneyPop, number_of_koalas, number_of_dingos, number_of_kangaroos, number_of_cassowaries);
        // MELBOURNE ANIMALS
        number_of_koalas = 148;
        number_of_dingos = 849;
        number_of_kangaroos = 400;
        number_of_cassowaries = 12;
    printf("\t%s\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n", place2visit2, MelbournePop, number_of_koalas, number_of_dingos, number_of_kangaroos, number_of_cassowaries);
        // BRISBANE ANIMALS
        number_of_koalas = 911;
        number_of_dingos = 447;
        number_of_kangaroos = 56;
        number_of_cassowaries = 7;
    printf("\t%s\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n", place2visit3, BrisbanePop, number_of_koalas, number_of_dingos, number_of_kangaroos, number_of_cassowaries);
        // PERTH ANIMALS
        number_of_koalas = 2475;
        number_of_dingos = 1254;
        number_of_kangaroos = 398;
        number_of_cassowaries = 217;
    printf("\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n", place2visit4, PerthPop, number_of_koalas, number_of_dingos, number_of_kangaroos, number_of_cassowaries);
        // DARWIN ANIMALS
        number_of_koalas = 678;
        number_of_dingos = 786;
        number_of_kangaroos = 64;
        number_of_cassowaries = 2;
    printf("\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n\n\n", place2visit5, DarwinPop, number_of_koalas, number_of_dingos, number_of_kangaroos, number_of_cassowaries);

    printf("\t\t\t\t\t    We hope you enjoy this adventure\n\n");
    printf("\t\t\t\t\t\t\tGOOD TRIP\n\n\n");
    return 0;
}
