// CALCULAR INDICE DE MASA CORPORAL

// IMC = peso(kg) / altura^2(m)

#include <stdio.h>
#include <math.h>

#define EXP_ALTURA 2

main()
{
    // SET UP VARIABLES
    float indiceMasaCorp, peso, altura;

    printf("\n\n\t\t\t\t\t\tCALCULAR INDICE DE MASA CORPORAL\n");
    printf("\t\t\t\t\t\t--------------------------------\n\n\n");

    printf("Ingrese su peso en kilogramos: ");
    scanf(" %f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf(" %f", &altura);

    indiceMasaCorp = peso / (pow(altura, EXP_ALTURA));

    printf("\nSu Indice de Masa Corporal es: %.3f\n\n", indiceMasaCorp);
    return 0;
}
