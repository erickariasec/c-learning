/* This is the time when we are going to build something more professional using Escape Sequences,
   Conversion Characters and Variables */

#include <stdio.h>

main()

{
    // Three people are going to buy at SMARTLINE's STORE


    //Setting General Variables

    char item_1[10] = "Computers"; // This variable was searched on internet, this is not part of the book until now.
    char item_2[] = "Cameras"; // This variable was searched on internet, this is not part of the book until now.
    char item_3[6] = "Books"; // This variable was searched on internet, this is not part of the book until now.
    char name_initial, surname_initial;
    int number_of_computers_bought;
    int number_of_cameras_bought;
    int number_of_books_bought;
    float computers = 429.990000;
    float cameras = 984.790000;
    float books = 9.990000;





    // Information for the FIRST person

    name_initial = 'R';
    surname_initial = 'A';

    number_of_computers_bought = 5;
    number_of_cameras_bought = 1;
    number_of_books_bought = 8;


    printf("Welcome Mr. %c%c, itz\b\'s a pleasure having you here.", name_initial, surname_initial);

        printf("\n\n\n\t\t\tSMARTLINEZ\b\'s STORE\n\n\n");

    printf("UNITS\t\tITEMS\t\t\tUNIT PRICE\tTOTAL PRICE\n");
    printf("%d\t\t%s\t\t%.2f\t\t%.2f\n", number_of_computers_bought, item_1, computers, computers*number_of_computers_bought);
    printf("%d\t\t%s\t\t\t%.2f\t\t%.2f\n", number_of_cameras_bought, item_2, cameras, cameras*number_of_cameras_bought);
    printf("%d\t\t%s\t\t\t%.2f\t\t%.2f\n", number_of_books_bought, item_3, books, books*number_of_books_bought);
    printf("\t\t\t\t\t\t\t---------\n"); //Separator
    printf("\t\t\t\t\t\t\t%c%.2f\n\n", '$', (computers, computers*number_of_computers_bought)+(cameras*number_of_cameras_bought)+(books*number_of_books_bought));

    printf("\t\t     Thanks for your purchase\n\n\n\n\n\a");

    printf("-----------------------------------------------------------------------------------\n\n\n\n\n");






    // Information for the SECOND person

    name_initial = 'N';
    surname_initial = 'S';

    number_of_computers_bought = 1;
    number_of_cameras_bought = 2;
    number_of_books_bought = 1;


    printf("Welcome Mrs. %c%c, itz\b\'s a pleasure having you here.", name_initial, surname_initial);

        printf("\n\n\n\t\t\tSMARTLINEZ\b\'s STORE\n\n\n");

    printf("UNITS\t\tITEMS\t\t\tUNIT PRICE\tTOTAL PRICE\n");
    printf("%d\t\t%s\t\t%.2f\t\t%.2f\n", number_of_computers_bought, item_1, computers, computers*number_of_computers_bought);
    printf("%d\t\t%s\t\t\t%.2f\t\t%.2f\n", number_of_cameras_bought, item_2, cameras, cameras*number_of_cameras_bought);
    printf("%d\t\t%s\t\t\t%.2f\t\t%.2f\n", number_of_books_bought, item_3, books, books*number_of_books_bought);
    printf("\t\t\t\t\t\t\t---------\n"); //Separator
    printf("\t\t\t\t\t\t\t%c%.2f\n\n", '$', (computers, computers*number_of_computers_bought)+(cameras*number_of_cameras_bought)+(books*number_of_books_bought));

    printf("\t\t     Thanks for your purchase\n\n\n\n\n\a");

    printf("-----------------------------------------------------------------------------------\n\n\n\n\n");





    // Information for the THIRD person

    name_initial = 'E';
    surname_initial = 'A';

    number_of_computers_bought = 4;
    number_of_cameras_bought = 3;
    number_of_books_bought = 12;


    printf("Welcome Mr. %c%c, itz\b\'s a pleasure having you here.", name_initial, surname_initial);

        printf("\n\n\n\t\t\tSMARTLINEZ\b\'s STORE\n\n\n");

    printf("UNITS\t\tITEMS\t\t\tUNIT PRICE\tTOTAL PRICE\n");
    printf("%d\t\t%s\t\t%.2f\t\t%.2f\n", number_of_computers_bought, item_1, computers, computers*number_of_computers_bought);
    printf("%d\t\t%s\t\t\t%.2f\t\t%.2f\n", number_of_cameras_bought, item_2, cameras, cameras*number_of_cameras_bought);
    printf("%d\t\t%s\t\t\t%.2f\t\t%.2f\n", number_of_books_bought, item_3, books, books*number_of_books_bought);
    printf("\t\t\t\t\t\t\t---------\n"); //Separator
    printf("\t\t\t\t\t\t\t%c%.2f\n\n", '$', (computers, computers*number_of_computers_bought)+(cameras*number_of_cameras_bought)+(books*number_of_books_bought));

    printf("\t\t     Thanks for your purchase\n\n\n\n\n\a");

    printf("-----------------------------------------------------------------------------------\n\n\n\n\n");

    return 0;

}
