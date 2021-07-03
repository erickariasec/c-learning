// CONSULTA TU CENTRO DE VACUNACIÓN

/* We are going to build a program which let you ask about your vaccination center depending on your age and
your last name. */

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "spanish");

    // SET UP VARIABLES
    char Norte1[30] = "Parque Bicentenario";    // A-I
    char Norte2[30] = "Colegio Central Tecnico";    // J-Q
    char Norte3[30] = "Universidad Catolica";   // R-Z

    char Centro1[30] = "Colegio Fernandez Madrid";      // A-I
    char Centro2[30] = "Colegio Sagrados Corazones Centro";     // J-Q
    char Centro3[30] = "Unidad Educativa Municipal Sucre";    // R-Z

    char Sur1[30] = "Colegio Tecnico Quito";    // A-I
    char Sur2[45] = "Colegio Consejo Provincial de Pichincha";    // J-Q
    char Sur3[30] = "Colegio Juan Pio Montufar";    // R-Z

    char name[25];
    char secondName[25];
    char lastName[25];
    char secondLastName[25];

    char sector[20];

    char firstDosis1[30] = "Jueves 1 de Julio, 2021";
    char firstDosis2[30] = "Martes 6 de Julio, 2021";
    char secondDosis[30] = "Pendiente Asignación";

    char schedule1[25] = "8AM - 12PM";  // 41 años o más
    char schedule2[25] = "2PM - 6PM";   // 12 años - 40 años

    int age, id;


    // APP CONSULTA TU CENTRO DE VACUNACIÓN
    printf("\n\n\t\t\t\t\tCONSULTA TU CENTRO DE VACUNACIÓN\n\n");

    printf("Ingresa tu primer nombre:\n");
    scanf(" %s", name);

    printf("\nIngresa tu segundo nombre:\n");
    scanf(" %s", secondName);

    printf("\nIngresa tu apellido paterno:\n");
    scanf(" %s", lastName);

    printf("\nIngresa tu apellido materno:\n");
    scanf(" %s", secondLastName);

    printf("\nIngresa tu número de cédula:\n");
    scanf(" %d", &id);

    printf("\nIngresa tu edad:\n");
    scanf(" %d", &age);

    printf("\nIngresa el sector donde vives: (Norte, Centro, Sur)\n");
    scanf(" %s", sector);




    // CONDITIONALS

//NORTE

    // First Conditional Norte Adultos: A-I   +41      Norte1
    if (((lastName[0] >= 'A') && (lastName[0] <= 'I')) &&
        ((age >= 41) && (sector[0] == 'N')) ||

       ((lastName[0] >= 'a') && (lastName[0] <= 'i')) &&
        ((age >= 41) && (sector[0] == 'n')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Norte1);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // First Conditional Norte Jovenes: A-I   12-40      Norte1
    if (((lastName[0] >= 'A') && (lastName[0] <= 'I')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'N')) ||

       ((lastName[0] >= 'a') && (lastName[0] <= 'i')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'n')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Norte1);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }



    // Second Conditional Norte Adultos: J-Q   +41     Norte2
    if (((lastName[0] >= 'J') && (lastName[0] <= 'Q')) &&
        ((age >= 41) && (sector[0] == 'N')) ||

       ((lastName[0] >= 'j') && (lastName[0] <= 'q')) &&
        ((age >= 41) && (sector[0] == 'n')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Norte2);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // Second Conditional Norte Jovenes: J-Q   12-40     Norte2
    if (((lastName[0] >= 'J') && (lastName[0] <= 'Q')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'N')) ||

       ((lastName[0] >= 'j') && (lastName[0] <= 'q')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'n')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Norte2);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }



    // Third Conditional Norte Adultos: R-Z   +41     Norte3
    if (((lastName[0] >= 'R') && (lastName[0] <= 'Z')) &&
        ((age >= 41) && (sector[0] == 'N')) ||

       ((lastName[0] >= 'r') && (lastName[0] <= 'z')) &&
        ((age >= 41) && (sector[0] == 'n')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Norte3);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // Third Conditional Norte Jovenes: R-Z   12-40     Norte3
    if (((lastName[0] >= 'R') && (lastName[0] <= 'Z')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'N')) ||

       ((lastName[0] >= 'r') && (lastName[0] <= 'z')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'n')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Norte3);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }




//CENTRO

    // First Conditional Centro Adultos: A-I   +41      Centro1
    if (((lastName[0] >= 'A') && (lastName[0] <= 'I')) &&
        ((age >= 41) && (sector[0] == 'C')) ||

       ((lastName[0] >= 'a') && (lastName[0] <= 'i')) &&
        ((age >= 41) && (sector[0] == 'c')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Centro1);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // First Conditional Centro Jovenes: A-I   12-40      Centro1
    if (((lastName[0] >= 'A') && (lastName[0] <= 'I')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'C')) ||

       ((lastName[0] >= 'a') && (lastName[0] <= 'i')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'c')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Centro1);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }



    // Second Conditional Centro Adultos: J-Q   +41     Centro2
    if (((lastName[0] >= 'J') && (lastName[0] <= 'Q')) &&
        ((age >= 41) && (sector[0] == 'C')) ||

       ((lastName[0] >= 'j') && (lastName[0] <= 'q')) &&
        ((age >= 41) && (sector[0] == 'c')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Centro2);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // Second Conditional Centro Jovenes: J-Q   12-40     Centro2
    if (((lastName[0] >= 'J') && (lastName[0] <= 'Q')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'C')) ||

       ((lastName[0] >= 'j') && (lastName[0] <= 'q')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'c')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Centro2);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }



    // Third Conditional Centro Adultos: R-Z   +41     Centro3
    if (((lastName[0] >= 'R') && (lastName[0] <= 'Z')) &&
        ((age >= 41) && (sector[0] == 'C')) ||

       ((lastName[0] >= 'r') && (lastName[0] <= 'z')) &&
        ((age >= 41) && (sector[0] == 'c')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Centro3);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // Third Conditional Centro Jovenes: R-Z   12-40     Centro3
    if (((lastName[0] >= 'R') && (lastName[0] <= 'Z')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'C')) ||

       ((lastName[0] >= 'r') && (lastName[0] <= 'z')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'c')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Centro3);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }





//SUR

    // First Conditional Sur Adultos: A-I   +41      Sur1
    if (((lastName[0] >= 'A') && (lastName[0] <= 'I')) &&
        ((age >= 41) && (sector[0] == 'S')) ||

       ((lastName[0] >= 'a') && (lastName[0] <= 'i')) &&
        ((age >= 41) && (sector[0] == 's')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Sur1);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }

    // First Conditional Sur Jovenes: A-I   12-40      Sur1
    if (((lastName[0] >= 'A') && (lastName[0] <= 'I')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'S')) ||

       ((lastName[0] >= 'a') && (lastName[0] <= 'i')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 's')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Sur1);
        printf("PRIMERA DOSIS: %s\n", firstDosis2);
        printf("HORARIO: %s\n", schedule2);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }



    // Second Conditional Sur Adultos: J-Q   +41     Sur2
    if (((lastName[0] >= 'J') && (lastName[0] <= 'Q')) &&
        ((age >= 41) && (sector[0] == 'S')) ||

       ((lastName[0] >= 'j') && (lastName[0] <= 'q')) &&
        ((age >= 41) && (sector[0] == 's')))
    {
        printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
        printf("\t\t\t\t\t\t------------------\a\n\n\n");

        printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
        printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

        printf("PROVINCIA: Pichincha\n");
        printf("CANTÓN: Quito\n");
        printf("CENTRO DE VACUNACIÓN: %s\n", Sur2);
        printf("PRIMERA DOSIS: %s\n", firstDosis1);
        printf("HORARIO: %s\n", schedule1);
        printf("SEGUNDA DOSIS: %s\n", secondDosis);
    }



// PRINT FUNCTION - RONALD


    // Second Conditional Sur Jovenes: J-Q   12-40     Sur2
    if (((lastName[0] >= 'J') && (lastName[0] <= 'Q')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'S')) ||

       ((lastName[0] >= 'j') && (lastName[0] <= 'q')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 's')))
    {
        printUserInformation(lastName, secondLastName, name, secondName, id, Sur2, firstDosis2, schedule2, secondDosis);
    }



    // Third Conditional Sur Adultos: R-Z   +41     Sur3
    if (((lastName[0] >= 'R') && (lastName[0] <= 'Z')) &&
        ((age >= 41) && (sector[0] == 'S')) ||

       ((lastName[0] >= 'r') && (lastName[0] <= 'z')) &&
        ((age >= 41) && (sector[0] == 's')))
    {
        printUserInformation(lastName, secondLastName, name, secondName, id, Sur3, firstDosis1, schedule1, secondDosis);
    }

    // Third Conditional Sur Jovenes: R-Z   12-40     Sur3
    if (((lastName[0] >= 'R') && (lastName[0] <= 'Z')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 'S')) ||

       ((lastName[0] >= 'r') && (lastName[0] <= 'z')) &&
        ((age >= 12) && (age <= 40) && (sector[0] == 's')))
    {
        printUserInformation(lastName, secondLastName, name, secondName, id, Sur3, firstDosis2, schedule2, secondDosis);
    }
    return 0;
}


// FUNCTION FOR PRINTING - IT IS AN INDEPENDENT FUNCTION

void printUserInformation(char lastName[25], char secondLastName[25], char name[25], char secondName[25], int id, char sector[30], char vaccineDate[30], char schedule[30], char vaccineSecondDate[30]) {
    printf("\n\n\n\n\t\t\t\t\t\tPLAN DE VACUNACIÓN\a\n");
    printf("\t\t\t\t\t\t------------------\a\n\n\n");

    printf("\t\t\t\t\t    %s %s %s %s\n\n", lastName, secondLastName, name, secondName);
    printf("\t\t\t\t\t\t  CI: %d\n\n\n", id);

    printf("PROVINCIA: Pichincha\n");
    printf("CANTÓN: Quito\n");
    printf("CENTRO DE VACUNACIÓN: %s\n", sector);
    printf("PRIMERA DOSIS: %s\n", vaccineDate);
    printf("HORARIO: %s\n", schedule);
    printf("SEGUNDA DOSIS: %s\n", vaccineSecondDate);
}

