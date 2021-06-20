/* We are going to practice Escape Sequences,Conversion Characters, Variables, Strings, Building Header Files,
   Including Header Files, Defining Constants and Interacting with users scanf() */

#include <stdio.h>
#include <locale.h> /* I searched this package on Google in order to add letter "�" in a word */
                    // By setting this function, I must put decimals with comma, no with point.

main()
{

    // Show Business Sponsor

    setlocale(LC_ALL, "spanish"); // This let me show letter "�" and other spanish keyboard letters.
    #include "SponsorFastFood.h"


    // Set up Variables

    char name[20];
    char favoriteFood[12];
    char favoriteDrink[9];
    char simpleAnswer[3];
    int day, month, year;
    float cost;


    // Questions for the survey

    printf("\n\n\t\t\t\t\t\t\tENCUESTA\n\n");

    printf("\n\n�Cu�l es tu nombre? (Escribe solamente tu primer nombre)\n");
    scanf(" %s", name); // "%[^\n]%*c" for a string with spaces ex. Ronald Arias

    printf("\n�Cu�l es tu fecha de nacimiento? (Ingresa en este formato ----> (XX/XX/XXXX))\n");
    scanf(" %d/%d/%d", &day, &month, &year);

    printf("\n�Cu�l es tu comida favorita (Pizza, Hamgurguesa o Salchipapa)? (*Selecciona solo una opci�n)\n");
    scanf(" %s", favoriteFood);

    printf("\n�Cu�l es tu bebida favorita (Cocacola, Sprite, Fanta, Gallito, Pepsi, Fiora)? (*Selecciona solo una opci�n)\n");
    scanf(" %s", favoriteDrink);

    printf("\n�Cu�nto crees que deber�a costar esta %s junto con tu %s? (*Ingrese en este formato --> ($XX,XX))\n", favoriteFood, favoriteDrink);
    scanf(" $%f", &cost);

    printf("\n�Si tu %s y tu %s cost�ra $%.2f lo comprar�as? (*Responde solamente Si o No)\n", favoriteFood, favoriteDrink, cost);
    scanf(" %s", simpleAnswer);

    printf("\n\n�Muchas gracias por responder esta encuesta %s!\n\n\a", name);
    printf("�Te acabas de ganar una deliciosa porci�n de papas fritas!\n\n");
    printf("Adem�s vis�tanos el %d/%d/2022 para celebrar tu cumplea�os, y por la compra de una %s, recibe totalmente gratis una %s!\n\n", day, month, favoriteFood, favoriteDrink);
    printf("�TE ESPERAMOS!\n\n");
    return 0;

}
