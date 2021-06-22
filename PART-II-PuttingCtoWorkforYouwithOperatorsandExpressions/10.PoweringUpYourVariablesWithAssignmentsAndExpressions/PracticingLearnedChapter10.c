// We are going to practice Compound Assignment, Compound Operators and Typecasting

// 2 y 2 son 4 CANCIÓN

#include <stdio.h>

main()
{
    int baseNumber = 2;

    baseNumber += 2; // Compound Asssignment
    printf("2 y 2 son %d\n", baseNumber);

    baseNumber = baseNumber + 2; // Normal Assignment
    printf("4 y 2 son %d\n", baseNumber);

    baseNumber += 2; // (+=) Compound Operators
    printf("6 y 2 son %d\n", baseNumber);

    baseNumber += 8;
    printf("Y 8 es %d\n", baseNumber);

    float totalValue = (float)baseNumber + 1.5; // Typecasting
    printf("Si sumamos el valor total más 1.5 es igual a %.2f", totalValue);

    return 0;
}




