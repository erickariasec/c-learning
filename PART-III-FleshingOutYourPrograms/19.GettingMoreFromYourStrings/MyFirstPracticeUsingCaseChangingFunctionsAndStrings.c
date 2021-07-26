#include <stdio.h>

main()
{
    // SET UP VARIABLES
    char name[20];
    char lastname[20];
    char city[15];
    char country[15];
    char fullName[40] = "";
    char fullLocation[30] = "";

    puts("What is your name? (ex. Juan Manuel)");
    gets(name);

    puts("\nWhat is your last name? (ex. Velasco Mendez)");
    gets(lastname);

    puts("\nWhere are you from? (country)");
    gets(country);

    puts("\nWhat city do you live in?");
    gets(city);


    // CONCATENATE FULLNAME
    strcat(fullName, name);
    strcat(fullName, " ");
    strcat(fullName, lastname);
    strcat(fullName, ".");

    // CONCATENATE FULLLOCATION
    strcat(fullLocation, city);
    strcat(fullLocation, ", ");
    strcat(fullLocation, country);

    putchar('\n');
    puts("Welcome \a");
    puts(fullName);
    puts("Its a pleasure having a person from ");
    puts(fullLocation);
    puts("HERE!\n\n");

    return 0;
}
