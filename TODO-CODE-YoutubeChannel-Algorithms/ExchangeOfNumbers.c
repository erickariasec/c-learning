// EXCHANGE OF NUMBERS

/*
Realizar un algoritmo que permita intercambiar el valor de dos variables. Por ejemplo, si la variable1 vale 5 y la
variable2 vale 12, hacer que la variable1 valga 12 y la variable2 valga 4. Tener en cuenta que al asignar un valor a una
variable se sobrescribe el valor anterior.
*/

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int num1 = 55;
    int num2 = 90;
    int aux;

    printf("El valor del primer numero es: %d\n", num1);
    printf("El valor del segundo numero es: %d\n\n", num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("El valor del primer numero despues del intercambio es: %d\n", num1);
    printf("El valor del segundo numero despues del intercambio es: %d\n\n", num2);

    return 0;
}
