// ENCONTRAR EL MAYOR NUMERO DE UN VECTOR/ARRAY

/* Realizar un algoritmo que permita la carga de 5 numeros en un vector. Una vez cargados debe determinar cual es el mayor
de ellos. */

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int nums[5] = {12, 50, 73, 84, 16};
    int mayor = -192000;
    int ctr;
    int position = 0;

    for (ctr = 0; ctr < 5; ctr++)
    {
        if (nums[ctr] > mayor)
        {
            mayor = nums[ctr];
            position = ctr;
        }
    }

    printf("El numero mayor es: %d y fue encontrado en la posicion %d\n\n", mayor, position);

    return 0;
}
