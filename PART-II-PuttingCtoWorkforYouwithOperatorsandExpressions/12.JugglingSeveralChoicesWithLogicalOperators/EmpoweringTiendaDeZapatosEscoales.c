// USING RELATIONAL AND LOGICAL OPERATORS

// We are going to build a school shoes store

// First class day is coming and most shoes are finishing, we only have 5 pairs size 34 available.

#include <stdio.h>
#include <locale.h>

#define VENUS_MUJER_BLANCO 2
#define VENUS_MUJER_CASUAL 0
#define VENUS_HOMBRE_BLANCO 1
#define VENUS_HOMBRE_CASUAL 0

#define BUNKY_MUJER_BLANCO 1
#define BUNKY_MUJER_CASUAL 0
#define BUNKY_HOMBRE_BLANCO 0
#define BUNKY_HOMBRE_CASUAL 1

#define VENUS 1
#define BUNKY 2

#define HOMBRE 1
#define MUJER 2

#define CASUAL 1
#define DEPORTIVO 2
#define CASUAL_Y_DEPORTIVO 3

#define SHOE_PRICE 19.99

#define SI 1
#define NO 2

#define SHOE_SIZE_AVAILABLE 34

main()
{
    setlocale(LC_ALL, "spanish"); // This let me show letter "ñ" "¿"



    // AD
    printf("\n\n\t\t\t\t\t     -----------------------\n");
    printf("\n\t\t\t\t\t\tSCHOOL SHOES STORE\n\n");
    printf("\t\t\t\t\t       ALL SHOES FOR $19,99");
    printf("\n\n\t\t\t\t\t     -----------------------\n\n\n");



    // SET UP VARIABLES
    char personName[10];
    int personSex, shoeSize, shortAnswer, shoeBrand, shoeType;



    // Select person sex
    printf("Hola, antes de comenzar necesitamos saber si eres hombre o mujer: (Selecciona 1 si eres HOMBRE o 2 si eres MUJER)\n");
    printf(" %d. HOMBRE\n", HOMBRE);
    printf(" %d. MUJER\n", MUJER);
    scanf(" %d", &personSex);



    // Condicional hombre o mujer
        if (personSex == HOMBRE)
        {
            printf("Qué tal, mi nombre es Juan, ¿cuál es tu nombre?\n");
            scanf(" %s", personName);
        }

        if (personSex == MUJER)
        {
            printf("Qué tal, mi nombre es Lucy, ¿cuál es tu nombre?\n");
            scanf(" %s", personName);
        }

        else if ((personSex > MUJER) || (personSex < HOMBRE))
        {
            printf("INGRESASTE UN VALOR INVÁLIDO, VUELVE A REINICIAR EL PROGRAMA, POR FAVOR!\a");
            return 0;
        }



    // Meeting - Shoe Size
    printf("Mucho gusto %s, ¿qué talla estás buscando?\n", personName);
    scanf(" %d", &shoeSize);



    // Size Conditional
        if (shoeSize == SHOE_SIZE_AVAILABLE)
        {
            printf("¡Oh sí! Tenemos disponible esa talla.");
        }

        if (shoeSize != SHOE_SIZE_AVAILABLE)
        {
            printf("¡Oh no! Lo sentimos, solo tenemos disponible la talla %d. ¿Le interesa? (Selecciona 1 si deseas continuar o 2 si deseas finalizar)\n", SHOE_SIZE_AVAILABLE);
            printf(" %d. SI\n", SI);
            printf(" %d. NO\n", NO);
            scanf(" %d", &shortAnswer);

            // Negative Answer Conditional
            if (shortAnswer == NO)
            {
                printf("Lamentamos mucho no poder ayudarte en este momento %s.\n", personName);
                printf("Esperamos verte pronto nuevamente.\n");
                printf("¡MUCHAS GRACIAS POR TU VISITA!.\n");
                return 0;
            }
        }



    // Select brand shoes
    printf("¿Qué marca de zapatos estás buscando? Tenemos disponible Venus o Bunky. (Selecciona 1 si desea VENUS o 2 si deseas BUNKY)\n");
    printf(" %d. VENUS\n", VENUS);
    printf(" %d. BUNKY\n", BUNKY);
    scanf(" %d", &shoeBrand);



    // Select color shoes
    printf("¿Casual o Deportivo?\n (Selecciona 1 si deseas casual, 2 si deseas deportivo o 3 si deseas ambos)\n");
    printf(" %d. CASUAL\n", CASUAL);
    printf(" %d. DEPORTIVO\n", DEPORTIVO);
    printf(" %d. AMBOS\n", CASUAL_Y_DEPORTIVO);
    scanf(" %d", &shoeType);



    // Price Conditionals
        if ((shoeType == CASUAL) || (shoeType == DEPORTIVO))
        {
            printf("Gracias por comprar estos zapatos %s!\a\n", personName);
            printf("Gastaste en total $%.2f\n", SHOE_PRICE);
            printf("Esperamos volver a verte pronto.\n");
            printf("¡MUCHAS GRACIAS VISITARNOS!\n");
        }

        if (shoeType == CASUAL_Y_DEPORTIVO)
        {
            printf("Gracias por comprar estos zapatos %s!\a\n", personName);
            printf("Gastaste en total $%.2f\n", (SHOE_PRICE*2));
            printf("Esperamos volver a verte pronto.\n");
            printf("¡MUCHAS GRACIAS VISITARNOS!\n");
        }

    return 0;
}

