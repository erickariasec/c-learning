// Generating a program for my bebecita

#include <stdio.h>
#include <locale.h> /* I searched this package on Google in order to add letter "�" "�" in a word SPANISH KEYBOARD */

main()
{
    // Set variables that scanf() will fill

    setlocale(LC_ALL, "spanish"); // This let me show letter "�" "�"

    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("YOUR MOM\�S INFORMATION\n\n");

    printf("�Cu�l es la inicial del nombre de tu madre?\n");
    scanf(" %c", &firstInitial);

    printf("�Cu�l es la inicial del apellido de tu madre?\n");
    scanf(" %c", &lastInitial);

    printf("�Cu�l es la edad de tu madre?\n");
    scanf(" %d", &age);

    printf("�Cu�l es el numero favorito de tu madre (solo n�meros enteros)?\n");
    scanf(" %d", &favorite_number);

    printf("Las iniciales de tu madre son %c. %c. y tiene %d a�itos.\n\a", firstInitial, lastInitial, age);
    printf("Su n�mero favorito es el %d y cocina delicioso.\n\n\n\n\n", favorite_number);




    printf("YOUR FATHER INFORMATION\n\n");

    printf("�Cu�l es la inicial del nombre de tu padre?\n");
    scanf(" %c", &firstInitial);

    printf("�Cu�l es la inicial del apellido de tu padre?\n");
    scanf(" %c", &lastInitial);

    printf("�Cu�l es la edad de tu padre?\n");
    scanf(" %d", &age);

    printf("�Cu�l es el numero favorito de tu padre (solo n�meros enteros)?\n");
    scanf(" %d", &favorite_number);

    printf("Las iniciales de tu padre son %c. %c. y tiene %d a�itos.\n\a", firstInitial, lastInitial, age);
    printf("Su n�mero favorito es el %d y es una persona muy amable.\n\n\n", favorite_number);


    return 0;

}
