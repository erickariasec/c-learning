// INTERNET COMPANY

/*
Un gerente de una empresa prestadora de servicios de internet necesita un algoritmo que permita realizar el calculo del
monto a pagar de la factura de consumo de internet de 5 clientes de una empresa. Para ello, el algoritmo debe solicitar
por teclado dos datos: DNI del cliente y tipo de servicio. Los tipos de servicio son 3:

    1. Internet 30 megas (cuyo valor es de $750 - 10% de descuento)
    2. Internet 50 megas (cuyo valor es de $930 - 5% de descuento)
    3. Internet 100 megas (cuyo valor es de $1200)

El algoritmo debe poder calcular el monto a pagar (dependiendo del tipo de servicio con el que cuente el cliente) e
informar por pantalla el DNI del mismo junto con el monto a pagar y el numero de servicio con el que cuenta.
*/


#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int tipoServ;
    float total;
    char dni[11];

    printf("\n\n\t\t\t\t\t\tINTERNET COMPANY\n");
    printf("\t\t\t\t\t\t----------------\n\n");

    printf("1. Internet 30 megas (cuyo valor es de $750 - 10%% de descuento)\n");
    printf("2. Internet 50 megas (cuyo valor es de $930 - 5%% de descuento)\n");
    printf("3. Internet 100 megas (cuyo valor es de $1200)\n\n");

    printf("Ingrese el DNI de la persona: ");
    scanf(" %s", &dni);
    printf("Ingrese el tipo de servicio: ");
    scanf(" %d", &tipoServ);

    if (tipoServ == 1)
    {
        total = 750 - (750*0.10);
    }
    if (tipoServ == 2)
    {
        total = 930 - (930*0.05);
    }
    if (tipoServ == 3)
    {
        total = 1200;
    }

    printf("\n\nEl cliente con DNI: %s debe pagar $%.2f por el tipo de servicio %d.\n\n\a", dni, total, tipoServ);

    return 0;
}
