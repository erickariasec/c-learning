/* Create a Feisbuk app that includes:
1. Register Menu
2. Login Menu (NOT RUNNING CURRENTLY)
3. Suggest Friends
4. Logout Menu
Create a HEADER FILE that contatins all USER NAMES and VERIFY them in Login Menu. */

#include "FeisbukUserNames.h"

#include <stdio.h> // for: printf(), scanf(), putchar(), putch(), puts(), getchar(), getch(), gets()
#include <string.h> // for: strlen(), strcmp()
#include <ctype.h> // for: isdigit(), isalpha(), islower(), isupper(), tolower(), toupper()
#include <stdlib.h> // for: exit() function

#define HOMBRE 1
#define MUJER 2

#define YES 1
#define NO 2

#define MENU 0

main()
{
    // SET UP VARIABLES
    char name[20], lastName[20], userName[20], phoneNumber[11], email[30], password[25], passwordRetry[30], emailLogin[30], passwordLogin[25];
    char fullName[40] = "";
    char publishStatus[100];
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


    // CREATE USERNAME
    printf("Es el momento perfecto para crear tu nombre de usuario!\n");
    printf("De preferencia escribe el nombre de usuario que mas usas en tus diferentes redes sociales.\n\n");
    printf("\nEscribe tu nombre de usurario: ");
    scanf(" %s", userName);
    printf("Genial %s, asi sera mucho mas facil que tus amigos te encuentren!\n\n\a", name);

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


    do
    {
        // CHOOSE ACTION TO DO
        printf("\n\nQue quieres realizar ahora?\n");
        printf("1. Subir Foto de Perfil.\n");
        printf("2. Ver Personas que quiza Conozca.\n");
        printf("3. Publicar un Estado.\n");
        printf("4. Cerrar Sesion.\n\n");

        do
        {
            printf("INGRESA EL NUMERO DE LA ACCION QUE DESEAS REALIZAR: ");
            scanf(" %d", &actionChoice);
            switch(actionChoice)
            {
                // UPLOAD PROFILE PICTURE
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
                         break;


                // PEOPLE YOU MAY KNOW
                case(2): printf("\nEstas son las personas que quiza conozcas: \n\n\a");

                         if (strcmp(userName, ErickAriasUserName) == 0)
                         {
                             printf("1. %s\n", DarwinToroErickAriasFriend);
                             printf("2. %s\n", DavidLemaErickAriasFriend);
                             printf("3. %s\n", AlexisSanchezErickAriasFriend);
                         }

                         else if (strcmp(userName, NathalyVillarroelUserName) == 0)
                         {
                             printf("1. %s\n", SaraVegaNathyVillarroelFriend);
                             printf("2. %s\n", JosythaTorresNathyVillarroelFriend);
                             printf("3. %s\n", MelFranchescaNathyVillarroelFriend);
                         }
                         else if (strcmp(userName, JoseAriasUserName) == 0)
                         {
                             printf("1. %s\n", BettyAriasJoseAriasFriend);
                             printf("2. %s\n", ManuelQuilcaJoseAriasFriend);
                             printf("3. %s\n", HildaSanchezJoseAriasFriend);
                         }
                         else
                         {
                             printf("\n\nLO SENTIMOS!\n\a");
                             printf("No pudimos encontrar informacion relacionada a personas que quiza conozcas.\n");
                             printf("Tus datos no se han registrado correctamente en la base de datos!\n\n");
                         }
                         break;


                // PUBLISH A STATUS
                case(3): printf("\nEscribe como te sientes: (1 palabra maximo)\n\n");
                         scanf(" %s",publishStatus);
                         printf("\n\nTu estado ha sido publicado exitosamente %s!\a\n\n", name);
                         break;


                // SIGN OFF
                case(4): printf("\nAcabas de cerrar sesion exitosamente %s!\n\a", name);
                         printf("Esperamos verte pronto por aqui!\n\n");
                         exit(1);

                default: printf("\nEsa no es una opcion valida %s!\n\a", name);
                         printf("INTENTALO NUEVAMENTE!\n\n");
                         break;
            }
        }
        while ((actionChoice <= -1) || (actionChoice > 4));
    }
    while (MENU == 0);

    return 0;
}
