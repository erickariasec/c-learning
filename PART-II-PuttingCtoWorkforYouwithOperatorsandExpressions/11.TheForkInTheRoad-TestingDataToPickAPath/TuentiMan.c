// We are going to create a Tuenti Man for you

#include <stdio.h>
#include <locale.h>

#define PIDE_TU_CHIP 1
#define RECARGA 2
#define CAMBIA_TU_PORTABILIDAD 3
#define TERMINAR_PROCESO 4

#define COMBO2GB 1
#define COMBO10GB 2
#define COMBO15GB 3
#define COMBO20GB 4

#define PREPAGO 1
#define PLAN 2

#define RECARGA5 1
#define RECARGA10 2
#define RECARGA20 3


#define MOVISTAR 1
#define CLARO 2
#define CNT 3

#define SI 1
#define NO 2

main()
{
    // SPANISH KEYBOARD
    setlocale(LC_ALL, "spanish"); // This let me show letter "ñ" "¿"

    printf("\n\n\t\t\t\t\t\tTUENTI MAN\n");
    printf("\t\t\t\t\t\t----------\n\n\n");

    // SET UP VARIABLES
    char personName[15];
    char personLastName[15];
    char city[15];
    char province[15];
    char email[30];
    int firstAction, myChipCombo, myRecarga;
    int day, month, year;
    int id, actualPhoneNumber, aditionalPhoneNumber, actualPhoneLine, actualPhoneOperator, shortAnswer;


    // ASK FOR PERSONAL INFORMATION
    printf("REGISTRATE:\n\n");

    printf("¿Cuál es tu nombre? (ex: Juan)\n");
    scanf(" %s", personName);

    printf("\n¿Cuál es tu apellido? (ex: Zambrano)\n");
    scanf(" %s", personLastName);

    printf("\n¿Cuál es tu fecha de nacimiento? (ex: 15/12/2000)\n");
    scanf(" %d/%d/%d", &day, &month, &year);

    printf("\n¿Ciudad dónde vives? (ex: Guayaquil)\n");
    scanf(" %s", city);

    printf("\nIngresa tu provincia: (ex: Guayas)\n");
    scanf(" %s", province);

    printf("\n\n¡Muchas gracias por registrarte %s!\n\n\n\n\n\a", personName);

    printf("¿Qué es lo que deseas realizar ahora?\n");
    printf(" %d. PIDE TU CHIP\n", PIDE_TU_CHIP);
    printf(" %d. RECARGA\n", RECARGA);
    printf(" %d. CAMBIA TU PORTABILIDAD\n", CAMBIA_TU_PORTABILIDAD);
    printf(" %d. TERMINAR PROCESO\n", TERMINAR_PROCESO);
    scanf(" %d", &firstAction);




    // Opción PIDE TU CHIP
    if (firstAction == PIDE_TU_CHIP)
    {
        printf("\n\nCompra tu Chip Tuenti con línea nueva y envío a domicilio sin costo\n\n");

        // SELECT YOUR PACK
        printf("SELECCIONA TU COMBO:\n");
        printf(" %d. 2GB --> $5\n", COMBO2GB);
        printf(" %d. 10GB --> $10\n", COMBO10GB);
        printf(" %d. 15GB --> $20\n", COMBO15GB);
        printf(" %d. 20GB --> $25\n", COMBO20GB);
        scanf(" %d", &myChipCombo);

        printf("\n¡Qué bacán %s, tu chip Tuenti pronto estará en tu casa!\n\n", personName);

        // CONFIRM DATA
        printf("INGRESA LOS DATOS FALTANTES PARA FINALIZAR TU COMPRA:\n\n");
        printf("NOMBRE: %s %s\n", personName, personLastName);
        printf("CIUDAD: %s\n", city);
        printf("EMAIL: ");
        scanf(" %s", email);
        printf("CÉDULA: ");
        scanf(" %d", &id);

        printf("\n\n\nListo, en el transcurso de 24 a 48 horas un Tuenti Man estará entregándote tu chip en casa.\a\n\n");
        printf("¡Muchas gracias %s!\n", personName);
    }



    // Opción Recarga
    if (firstAction == RECARGA)
    {
        printf("\n\nHAZ TU RECARGA ONLINE AQUÍ\n\n");

        printf("Recarga tu Tuenti donde te encuentres\n\n");

        printf("Ingresa tu número de cédula\n");
        scanf(" %d", &id);

        printf("\nRecarga uno de estos montos:\n");
        printf(" %d. $5\n", RECARGA5);
        printf(" %d. $10\n", RECARGA10);
        printf(" %d. $20\n", RECARGA20);
        scanf(" %d", &myRecarga);

        printf("\nIngresa tu correo electrónico:\n");
        scanf(" %s", email);

        printf("\nIngresa el número de celular a recargar:\n");
        scanf(" %d", &actualPhoneNumber);

        printf("\n\n¡VERIFICA TUS DATOS POR FAVOR!\n\n");
        printf("¿Los datos ingresados son correctos?\n");
        printf(" %d. SI\n", SI);
        printf(" %d. NO\n", NO);
        scanf(" %d", &shortAnswer);

        if (shortAnswer == SI)
        {
            printf("\n\n¡Qué bacán %s, acabamos de acreditar tu recarga en este momento al número %d!\a\n", personName, actualPhoneNumber);
            printf("Además te damos MEGAS GRATIS por tu combo!\n");
            printf("Juega la Ruleta Tuenti y GANA!\n");
            printf("Abre el enlace que te acabamos de enviar al correo %s para que puedas participar!\n", email);
            printf("¡MUCHA SUERTE!\n\n\n");
        }

        if (shortAnswer == NO)
        {
            printf("\n\nPor favor vuelve a ingresar tus datos correctamente\n\n");

            printf("Ingresa tu número de cédula\n");
            scanf(" %d", &id);

            printf("\nRecarga uno de estos montos:\n");
            printf(" %d. $5\n", RECARGA5);
            printf(" %d. $10\n", RECARGA10);
            printf(" %d. $20\n", RECARGA20);
            scanf(" %d", &myRecarga);

            printf("\nIngresa tu correo electrónico:\n");
            scanf(" %s", email);

            printf("\nIngresa el número de celular a recargar:\n");
            scanf(" %d", &actualPhoneNumber);

            printf("\n\n¡VERIFICA TUS DATOS POR FAVOR!\n\n");
            printf("¿Los datos ingresados son correctos?\n");
            printf(" %d. SI\n", SI);
            printf(" %d. NO\n", NO);
            scanf(" %d", &shortAnswer);

            if (shortAnswer == SI)
            {
                printf("\n\n¡Qué bacán %s, acabamos de acreditarte tu recarga en este momento!\a\n", personName);
                printf("Además te damos MEGAS GRATIS por tu combo!\n");
                printf("Juega la Ruleta Tuenti y GANA!\n");
                printf("Abre el enlace que te acabamos de enviar para que puedas participar!\n");
                printf("¡MUCHA SUERTE!\n\n\n");
            }

            else
            {
                printf("\n\nLo sentimos pero ya has ingresado los valores incorrectos varias veces...\a\n");
                printf("\n*¡VUELVE A REINICIAR EL PROGRAMA POR FAVOR!\n");
            }
        }
    }




    // Opción Cambia tu Portabilidad
    if (firstAction == CAMBIA_TU_PORTABILIDAD)
    {
        printf("\n\nPÁSATE A TUENTI CON TU NÚMERO ACTUAL                        MONTO A PAGAR $0,00\n\n");

        printf("Ingresa tu número de cédula\n");
        scanf(" %d", &id);

        printf("\nIngresa un número adicional de contacto:\n");
        scanf(" %d", &aditionalPhoneNumber);

        printf("\nIngresa tu correo electrónico:\n");
        scanf(" %s", email);

        printf("\nIngresa el número que quieres portar a Tuenti:\n");
        scanf(" %d", &actualPhoneNumber);

        // Select Actual Phone Line
        printf("\nTu línea actualmente es:\n");
        printf(" %d. PREPAGO\n", PREPAGO);
        printf(" %d. PLAN\n", PLAN);
        scanf(" %d", &actualPhoneLine);

        // Select Actual Operator
        printf("\n¿Qué operador eres actualmente?\n");
        printf(" %d. MOVISTAR\n", MOVISTAR);
        printf(" %d. CLARO\n", CLARO);
        printf(" %d. CNT\n", CNT);
        scanf(" %d", &actualPhoneOperator);

        printf("\n\n¡Qué bacán %s, ahora formas parte de la Tuenti Familia!.\a\n", personName);
        printf("Recibirás un código vía mensaje de texto al número %d para confirmar.\n", actualPhoneNumber);
        printf("¡MUCHAS GRACIAS POR CONFIAR EN NOSOTROS!\n\n\n");
    }




    // Opción Terminar Proceso
    if (firstAction == TERMINAR_PROCESO)
    {
        printf("\n\n¡Muchas gracias por registrarte %s!\a\n\n", personName);
        printf("¡VUELVE PRONTO!\n\n");
        printf("¡Tenemos muchas sorpresas para ti!\n\n\n");
    }

    return 0;
}

