/* Here we are going to have some people buying at our liquor store, and we are going to practice Escape Sequences,
   Conversion Characters, Variables and Strings */

#include <stdio.h>
#include <string.h>
#include <locale.h> /* I searched this package on Google in order to add letter "ñ" in a word */

main()

{

        char client_1[7];
        char client_2[6] = "Erick";
        char client_3[] = "David";

        setlocale(LC_ALL, "spanish"); // This let me show letter "ñ"

        char liquor1[] = "Norteño";
        char liquor2[7];
        char liquor3[8] = "Bacardi";
        char liquor4[7];

        float nortenos = 7.500000;
        float switches = 3.500000;
        float bacardies = 8.750000;
        float zhumires = 4.500000;

        int number_of_nortenos_bought;
        int number_of_switches_bought;
        int number_of_bacardies_bought;
        int number_of_zhumires_bought;

            client_1[0] = 'D';
            client_1[1] = 'a';
            client_1[2] = 'r';
            client_1[3] = 'w';
            client_1[4] = 'i';
            client_1[5] = 'n';
            client_1[6] = '\0';

            liquor2[0] = 'S';
            liquor2[1] = 'w';
            liquor2[2] = 'i';
            liquor2[3] = 't';
            liquor2[4] = 'c';
            liquor2[5] = 'h';
            liquor2[6] = '\0';

            strcpy(liquor4, "Zhumir");


        /* INFORMATION FOR THE LIQUOR STORE */

        printf("\n\n\t\t\t\tPREMIUM LIQUOR STORE\n\n\n\a");

        printf("\t\t\t\tPricing:\n\n");

        printf("\t\t\t\t%s = $%.2f\n", liquor1, nortenos);
        printf("\t\t\t\t%s = $%.2f\n", liquor2, switches);
        printf("\t\t\t\t%s = $%.2f\n", liquor3, bacardies);
        printf("\t\t\t\t%s = $%.2f\n\n\n", liquor4, zhumires);
        printf("---------------------------------------------------------------------------------\n\n\n");

        /*INFORMATION FOR THE PARTY */

        printf("\t\t\t\tDARWIN\'S PARTY\n\n\n");
        printf("---------------------------------------------------------------------------------\n\n\n");

        /* INFORMATION FOR THE FIRST PERSON (DARWIN) */

        number_of_nortenos_bought = 6;
        number_of_switches_bought = 2;
        number_of_bacardies_bought = 2;
        number_of_zhumires_bought = 4;

        printf("%s\'s party is going to begin in some hours and he needs to buy some liquor:\n\n", client_1);

        printf("%s = %d ($%.2f is the total amount)\n", liquor1, number_of_nortenos_bought, (number_of_nortenos_bought*nortenos));
        printf("%s = %d ($%.2f is the total amount)\n", liquor2, number_of_switches_bought, (number_of_switches_bought*switches));
        printf("%s = %d ($%.2f is the total amount)\n", liquor3, number_of_bacardies_bought, (number_of_bacardies_bought*bacardies));
        printf("%s = %d ($%.2f is the total amount)\n\n", liquor4, number_of_zhumires_bought, (number_of_zhumires_bought*zhumires));

        printf("%s needs $%.2f in total in order to buy all.\n\n\n", client_1, ((number_of_nortenos_bought*nortenos)+(number_of_switches_bought*switches)+(number_of_bacardies_bought*bacardies)+(number_of_zhumires_bought*zhumires)));
        printf("---------------------------------------------------------------------------------\n\n\n");

        float client_1_total_spent = 87.500000;

        /* INFORMATION FOR THE SECOND PERSON (ERICK) */

        number_of_nortenos_bought = 2;
        number_of_switches_bought = 12;
        number_of_bacardies_bought = 2;
        number_of_zhumires_bought = 1;

        printf("%s also wants to buy some liquor for %s\'s party:\n\n", client_2, client_1);

        printf("%s = %d ($%.2f is the total amount)\n", liquor1, number_of_nortenos_bought, (number_of_nortenos_bought*nortenos));
        printf("%s = %d ($%.2f is the total amount)\n", liquor2, number_of_switches_bought, (number_of_switches_bought*switches));
        printf("%s = %d ($%.2f is the total amount)\n", liquor3, number_of_bacardies_bought, (number_of_bacardies_bought*bacardies));
        printf("%s = %d ($%.2f is the total amount)\n\n", liquor4, number_of_zhumires_bought, (number_of_zhumires_bought*zhumires));

        printf("%s needs $%.2f in total in order to buy all.\n\n\n", client_2, ((number_of_nortenos_bought*nortenos)+(number_of_switches_bought*switches)+(number_of_bacardies_bought*bacardies)+(number_of_zhumires_bought*zhumires)));
        printf("---------------------------------------------------------------------------------\n\n\n");

        float client_2_total_spent = 79.000000;

        /* INFORMATION FOR THE THIRD PERSON (DAVID) */

        number_of_nortenos_bought = 3;
        number_of_switches_bought = 2;
        number_of_bacardies_bought = 1;
        number_of_zhumires_bought = 1;

        printf("And obviously %s wants to buy some liquor for %s\'s party:\n\n", client_3, client_1);

        printf("%s = %d ($%.2f is the total amount)\n", liquor1, number_of_nortenos_bought, (number_of_nortenos_bought*nortenos));
        printf("%s = %d ($%.2f is the total amount)\n", liquor2, number_of_switches_bought, (number_of_switches_bought*switches));
        printf("%s = %d ($%.2f is the total amount)\n", liquor3, number_of_bacardies_bought, (number_of_bacardies_bought*bacardies));
        printf("%s = %d ($%.2f is the total amount)\n\n", liquor4, number_of_zhumires_bought, (number_of_zhumires_bought*zhumires));

        printf("%s needs $%.2f in total in order to buy all.\n\n\n", client_3, ((number_of_nortenos_bought*nortenos)+(number_of_switches_bought*switches)+(number_of_bacardies_bought*bacardies)+(number_of_zhumires_bought*zhumires)));
        printf("---------------------------------------------------------------------------------\n\n\n");

        float client_3_total_spent = 42.750000;

        printf("HOW MUCH DID THEY SPEND FOR DARWIN´S PARTY?\n\n");

        printf("They spent $%.2f in total.\n\n\n", (client_1_total_spent+client_2_total_spent+client_3_total_spent));
        printf("---------------------------------------------------------------------------------\n\n\n");

        return 0;
}
