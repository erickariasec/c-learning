// ESTRUCTURAS REPETITIVAS Y SELECTIVAS

/* Un niño de primaria necesita realizar 5 calculos diferentes entre 2 numeros. Para esto necesita un programa que, para
cada calculo, permita el ingreso de los 2 numeros por separado al igual que la operacion que desea hacer entre ambas. Al
mismo tiempo debe poder realizar el calculo en cuestion y mostrar el resultado por pantalla.

Por ejemplo:
    num1 = 25
    num2 = 15
    operador = +
*/


#include <stdio.h>

main()
{
    // SET UP VARIABLES
    float num1, num2;
    float result = 0;
    char operatorSign;
    int ctr;

    for (ctr = 0; ctr < 5; ctr++)
    {
        printf("Ingrese el primer numero: ");
        scanf(" %f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf(" %f", &num2);
        printf("Ingrese el operador(+, -, *, /): ");
        scanf(" %c", &operatorSign);

        if (operatorSign == '+')
        {
            result = num1 + num2;
        }
        else if (operatorSign == '-')
        {
            result = num1 - num2;
        }
        else if (operatorSign == '*')
        {
            result = num1 * num2;
        }
        else if (operatorSign == '/')
        {
            result = num1 / num2;
        }

        printf("El resultado de la operacion No.%d es: %.2f\a\n\n", ctr+1, result);
    }

    return 0;
}
