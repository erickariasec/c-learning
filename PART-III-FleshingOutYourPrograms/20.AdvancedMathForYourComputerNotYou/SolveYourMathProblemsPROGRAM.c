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
    float numberToRaise, powerOfNumber; // RAISE NUMBER TO A POWER
    float getCosine, getSine, getTangent, getArcCosine, getArcSine, getArcTangent; // TRIGONOMETRY
    float getExponentialFunction, getNaturalLog, getBase10Log;

    int choiceOperation, trigonometryChoice, logFunctionChoice;

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
                         printf("1. Get Cosine.\n");
                         printf("2. Get Sine.\n");
                         printf("3. Get Tangent.\n");
                         printf("4. Get Arc Cosine.\n");
                         printf("5. Get Arc Sine.\n");
                         printf("6. Get Arc Tangent.\n");

                         printf("\n\nEnter the number of the operation you want to do: ");
                         scanf(" %d", &trigonometryChoice);
                         switch(trigonometryChoice)
                         {
                             case(1): printf("Get cosine of: (degrees) ");
                                      scanf(" %f", &getCosine);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", cos((getCosine * (3.14159/180.0))));
                                      break;

                             case(2): printf("Get sine of: (degrees) ");
                                      scanf(" %f", &getSine);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", sin((getSine * (3.14159/180.0))));
                                      break;

                             case(3): printf("Get tangent of: (degrees) ");
                                      scanf(" %f", &getTangent);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", tan((getTangent * (3.14159/180.0))));
                                      break;

                             case(4): printf("Get arc cosine of: (degrees) ");
                                      scanf(" %f", &getArcCosine);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", acos((getArcCosine * (3.14159/180.0))));
                                      break;

                             case(5): printf("Get arc sine of: (degrees) ");
                                      scanf(" %f", &getArcSine);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", asin((getArcSine * (3.14159/180.0))));
                                      break;

                             case(6): printf("Get arc tangent of: (degrees) ");
                                      scanf(" %f", &getArcTangent);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", atan((getArcTangent * (3.14159/180.0))));
                                      break;

                             default: printf("\n\nThat is not a valid number choice...\n\a");
                                      printf("TRY AGAIN!\n\n");
                                      break;
                         }
                         break;

                case(8): printf("\n\nOk, Let\'s do some log functions!\n\n");
                         printf("1. Exponential Function.\n");
                         printf("2. Get Natural Log.\n");
                         printf("3. Get the Base 10 Log.\n");

                         printf("\n\nEnter the number of the operation you want to do: ");
                         scanf(" %d", &logFunctionChoice);
                         switch(logFunctionChoice)
                         {
                             case(1): printf("e raised to: ");
                                      scanf(" %f", &getExponentialFunction);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", exp(getExponentialFunction));
                                      break;

                             case(2): printf("Get the natural log of: ");
                                      scanf(" %f", &getNaturalLog);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", log(getNaturalLog));
                                      break;

                             case(3): printf("Get the base-10 log of: ");
                                      scanf(" %f", &getBase10Log);
                                      printf("Your result is: %.3f\n\n\n\n\n\a", log10(getBase10Log));
                                      break;
                         }
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
