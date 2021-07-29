// SOLVE YOUR MATH PROBLEMS

#include <stdio.h> // for: printf(), scanf()
#include <math.h> // for: floor(), ceil(), pow(), sqrt(), cos(x), sin(x), exp(x), log(x), log10(x)
#include <stdlib.h> // for: exit() function

#define MENU 0

main()
{
    float sumFirstValue, sumSecondValue, sumResult; // SUM
    float substractFirstValue, substractSecondValue, substractResult; // SUBSTRACTION
    float multiplicateFirstValue, multiplicateSecondValue, multiplicateResult; // MULTIPLICATION
    float divisionFirstValue, divisionSecondValue, divisionResult; // DIVISION
    float userSqrt; // SQUARE ROOT
    float numberToRaise, powerOfNumber;

    int choiceOperation;

    printf("\n\n\t\t\t\t\t\tSOLVE YOUR MATH PROBLEMS\n");
    printf("\t\t\t\t\t\t------------------------\n\n");

    do
    {
        printf("What do you want to solve now?\n\n");
        printf("1. Sum two numbers.\n");
        printf("2. Substract two numbers.\n");
        printf("3. Multiplication.\n");
        printf("4. Division.\n");
        printf("5. Get the square root.\n");
        printf("6. Raise a number to a power.\n");
        printf("7. Trigonometry.\n");
        printf("8. Log Functions.\n");
        printf("\n9. EXIT.\n");

        do
        {
            printf("\n\nEnter the number of the action you want to solve: ");
            scanf(" %d", &choiceOperation);
            switch(choiceOperation)
            {
                case(1): printf("\n\nOk, Let\'s sum!\n\n");
                         printf("Primer Valor: ");
                         scanf(" %f", &sumFirstValue);
                         printf("Segundo Valor: ");
                         scanf(" %f", &sumSecondValue);
                         sumResult = (sumFirstValue + sumSecondValue);
                         printf("Your result is: %.2f\n\n\n\n\n\a", sumResult);
                         break;

                case(2): printf("\n\nOk, Let\'s substract!\n\n");
                         printf("Primer Valor: ");
                         scanf(" %f", &substractFirstValue);
                         printf("Segundo Valor: ");
                         scanf(" %f", &substractSecondValue);
                         substractResult = (substractFirstValue - substractSecondValue);
                         printf("Your result is: %.2f\n\n\n\n\n\a", substractResult);
                         break;

                case(3): printf("\n\nOk, Let\'s multiplicate!\n\n");
                         printf("Primer Valor: ");
                         scanf(" %f", &multiplicateFirstValue);
                         printf("Segundo Valor: ");
                         scanf(" %f", &multiplicateSecondValue);
                         multiplicateResult = (multiplicateFirstValue * multiplicateSecondValue);
                         printf("Your result is: %.2f\n\n\n\n\n\a", multiplicateResult);
                         break;

                case(4): printf("\n\nOk, Let\'s divide!\n\n");
                         printf("Primer Valor: ");
                         scanf(" %f", &divisionFirstValue);
                         printf("Segundo Valor: ");
                         scanf(" %f", &divisionSecondValue);
                         divisionResult = (divisionFirstValue / divisionSecondValue);
                         printf("Your result is: %.2f\n\n\n\n\n\a", divisionResult);
                         break;

                case(5): printf("\n\nOk, Let\'s get the square root!\n\n");
                         printf("\n\nGet square root of: ");
                         scanf(" %f", &userSqrt);
                         printf("Your result is: %.2f\n\n\n\n\n\a", sqrt(userSqrt));
                         break;

                case(6): printf("\n\nOk, Let\'s raise a number to a power!\n\n");
                         printf("Write the number you want to raise to the power: ");
                         scanf(" %f", &numberToRaise);
                         printf("Write the power of the number you want to raise: ");
                         scanf(" %f", &powerOfNumber);
                         printf("Your result is: %.2f\n\n\n\n\n\a", pow(numberToRaise, powerOfNumber));
                         break;

                case(7): printf("\n\nOk, Let\'s do some trigonometry!\n\n");
                         break;

                case(8): printf("\n\nOk, Let\'s do some log functions!\n\n");
                         break;

                case(9): printf("\n\nIt has been a pleasure to help you solving this problems!\n\n\a");
                         printf("SEE YOU!\n\n");
                         exit(1);

                default: printf("\n\nThat is not a valid number choice...\n\a");
                         printf("TRY AGAIN!\n\n");
                         break;
            }
        }
        while ((choiceOperation < 1) || (choiceOperation > 9));
    }
    while (MENU == 0);

    return 0;
}
