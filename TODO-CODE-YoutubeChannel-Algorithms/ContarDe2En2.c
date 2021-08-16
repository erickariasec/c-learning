// CONTAR DE 2 EN 2

/* Realizar un algoritmo que muestre por pantalla los numeros del 200 al 250 saltando de 2 en 2.
La secuencia deberia ser: 200, 202, 204.........., 250. */

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int ctr = 200;

    while (ctr <= 250)
    {
        printf("This is number: %d\n", ctr);
        ctr += 2;
    }

    return 0;
}
