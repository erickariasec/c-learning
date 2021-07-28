/* Create a Feisbuk app that includes:
1. Register Menu
2. Login Menu (NOT RUNNING CURRENTLY)
3. Suggest Friends
4. Logout Menu
Create a HEADER FILE that contatins all USER NAMES and VERIFY them in Login Menu. */

#include "FeisbukUserNames.h"

#include <stdio.h> // for: printf(), scanf(), putchar(), putch(), puts(), getchar(), getch(), gets()
#include <string.h> // for: strlen()
#include <ctype.h> // for: isdigit(), isalpha(), islower(), isupper(), tolower(), toupper()
#include <stdlib.h> // for: exit() function

#define HOMBRE 1
#define MUJER 2

#define YES 1
#define NO 2

main()
{
    // SET UP VARIABLES
    char name[20], lastName[20], userName[20], phoneNumber[11], email[30], password[25], passwordRetry[30], emailLogin[30], passwordLogin[25];
    char fullName[40] = "";
    char yesNoInput[1];
    int day, month, year, sex;
    int checkCharPassword, hasDigit, hasLower, hasUpper;
    int actionChoice, shortAnswer;


    // INITIALIZE VARIABLES
    hasDigit = hasLower = hasUpper = 0;


    printf("\n\n\t\t\t\t\t\t    FEISBUK\n");
    printf("\t\t\t\t\t\t    -------\n\n");


    // REGISTER MENU
    printf("REGISTRARTE\n");
    printf("Es rapido y facil.\n\n");

    puts("Nombre: ");
    gets(name);

    puts("\nApellido: ");
    gets(lastName);

            // CONCATENATE NAME
            strcat(fullName, name);
            strcat(fullName, " ");
            strcat(fullName, lastName);

    printf("\nCorreo Electronico: \n");
    scanf(" %s",email);

    printf("\nFecha de Nacimiento(*Dia/Mes/Ano) (ex. 23/12/1948):\n");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("\nSexo: (Escribe 1 para HOMBRE, o 2 para MUJER)\n");
    printf("1. HOMBRE\n");
    printf("2. MUJER\n");
    scanf(" %d", &sex);


    // CHECKING PASSWORD AND VALIDATING REGISTER
    do
    {
        printf("\nContrasena: \n");
        scanf( "%s", password);

        for (checkCharPassword = 0; checkCharPassword < strlen(password); checkCharPassword++)
        {
            if (isdigit(password[checkCharPassword]))
            {
                hasDigit = 1;
                continue;
            }
            if (islower(password[checkCharPassword]))
            {
                hasLower = 1;
                continue;
            }
            if (isupper(password[checkCharPassword]))
            {
                hasUpper = 1;
            }
        }

        if ((hasDigit) && (hasLower) && (hasUpper))
        {
            printf("\n\n\t\t\t\t\t\tREGISTRO EXITOSO\n\a");
            printf("\t\t\t\t\t\t----------------\n\n\a");
            printf("\t\t\t\t\t      BIENVENIDO A FEISBUK\n");
            printf("\t\t\t\t\t\t  %s\n\n", fullName);
        }
        else
        {
            printf("\n\n\t\t\t\t\t\tREGISTRO FALLIDO\n\a");
            printf("\t\t\t\t\t\t----------------\n\n\a");
            printf("\t\t\t\t\t     VERIFICA TU CONTRASENA\n");
            printf("\t\t\t\t\t\t  %s\n\n", fullName);

            printf("*Tu contrasena deber tener por lo menos una Letra Minuscula, una Letra Mayuscula y un Numero\n\n");
            puts("VUELVE A ESCRIBIR TU CONTRASENA\n\n");
        }
    }
    while ((hasDigit != 1) || (hasLower != 1) || (hasUpper != 1));

    // NOT RUNNING CURRENTLY
    /*// INICIAR SESION
    puts("\n\n\n\nPor tu seguridad te pedimos INICIAR SESION para verificar que los datos ingresados sean correctos:\n\n");

    printf("\nCorreo Electronico: \n");
    scanf(" %s", emailLogin);

    printf("\nContrasena: \n");
    scanf(" %s", passwordLogin);

    if ((emailLogin == email) && (passwordLogin == password))
    {
        printf("\nMuchas Gracias por verificar tus datos %s!\n", name);
        printf("ES MOMENTO DE DISFRUTAR FEISBUK\n\n");
    }
    else
    {
        printf("\nCorreo Electronico o Contrasena incorrectos!\n");
        printf("VUELVE A INTENTARLO POR FAVOR\n");
    }*/


    // CHOOSE ACTION TO DO
    printf("\n\nQue quieres realizar ahora?\n");
    printf("1. Subir Foto de Perfil.\n");
    printf("2. Crear Nombre de Usuario.\n");
    printf("3. Publicar un Estado.\n");
    printf("4. Ver Personas que quiza Conozca.\n");
    printf("5. Cerrar Sesion.\n\n");

    do
    {
        printf("INGRESA EL NUMERO DE LA ACCION QUE DESEAS REALIZAR: ");
        scanf(" %d", &actionChoice);
        switch(actionChoice)
        {
            // SUBIR FOTO DE PERFIL
            case(1): printf("\nParece que no tienes fotos disponibles al momento.\n\n");
                     printf("Te gustaria subir una nueva foto?\n");
                     printf("1. SI\n");
                     printf("2. NO\n\n");

                     printf("ENTER YOUR CHOICE: ");
                     scanf(" %d", &shortAnswer);

                     if (shortAnswer == YES)
                     {
                         printf("Aqui esta:\n\n");
                         if (sex == HOMBRE)
                         {
                             printf("***************************\n");
                             printf("***************************\n");
                             printf("**                       **\n");
                             printf("**                       **\n");
                             printf("**     ****    ****      **\n");
                             printf("**     ****    ****      **\n");
                             printf("**                       **\n");
                             printf("**                       **\n");
                             printf("**     ****    ****      **\n");
                             printf("**      ||******||       **\n");
                             printf("**        ******         **\n");
                             printf("**                       **\n");
                             printf("**                       **\n");
                             printf("***************************\n");
                             printf("***************************\n");

                         }
                         else
                         {
                             printf("       ***************************         \n");
                             printf("       ***************************         \n");
                             printf("       **                       **         \n");
                             printf("       **                       **         \n");
                             printf("       **     ****    ****      **         \n");
                             printf("       **     ****    ****      **         \n");
                             printf("       **                       **         \n");
                             printf("       **                       **         \n");
                             printf("       **     ****    ****      **         \n");
                             printf("       **      ||******||       **         \n");
                             printf("**     **        ******         **       **\n");
                             printf("**     **                       **       **\n");
                             printf("**     **                       **       **\n");
                             printf("*******************************************\n");
                             printf("*******************************************\n");
                         }
                         printf("\nFoto cargada con exito!\n\n\a");
                     }
                     else
                     {
                         printf("No hay problema, quiza en otra ocasión\n\n\a");
                     }
                     return 0;

            // CREAR NOMBRE DE USUARIO
            case(2): printf("\nEscribe tu nombre de usurario: ");
                     scanf(" %s", userName);
                     /*do
                     {
                         printf("Personas:\n");
                         printf("Darwin Toro\n");
                     }
                     while (userName == ERICK_ARIAS);
                     break;
                     do
                     {
                         printf("Personas:\n");
                         printf("Sara Vega\n");
                     }
                     while (userName == NATHALY_VILLARROEL);
                     break;*/
                     if (strcmp(userName, ErickAriasUserName) == 0)
                     {
                         printf("Hola Erick");
                     }
                     /*else if (userName == NATHALY_VILLARROEL())
                     {
                         printf("Hola Nathy");
                     }*/
                     else if (strcmp(userName, NathalyVillarroelUserName) == 0)
                     {
                         printf("Hola Nathy");
                     }
                     else if (strcmp(userName, JoseAriasUserName) == 0)
                     {
                         printf("Hola Pepe");
                     }
                     else
                     {
                         printf("\n\nThat is not a valid user name, try again!\a");
                     }
                     return 0;

            // PUBLICAR UN ESTADO
            case(3): printf("NO");

            // PERSONAS QUE QUIZÁ CONOZCA
            case(4): printf("NO");

            // CERRAR SESIÓN
            case(5): printf("\nAcabas de cerrar sesion exitosamente %s!\n\a", name);
                     printf("Esperamos verte pronto por aqui!\n\n");
                     exit(1);

            default: printf("\nEsa no es una opcion valida %s!\n\a", name);
                     printf("INTENTALO NUEVAMENTE!\n\n");
                     break;
        }
    }
    while ((actionChoice < 1) || (actionChoice > 5));

    return 0;
}
