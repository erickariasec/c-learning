/* We are going to build a program where the user can enter a number and the program print the next five numbers and
after that returns to the original number. */

#include <stdio.h>

main()
{
    // SET UP VARIABLE
    int userNumber;

    // INSTRUCTION
    printf("\n\nYou are going to enter a number and the program will print the next five numbers and after that it will return to the original number\n\n");

    printf("Enter a integer number from 1 to 100:\n");
    scanf(" %d", &userNumber);

    printf("The next number is %d\n", ++userNumber);
    printf("The next number is %d\n", ++userNumber);
    printf("The next number is %d\n", ++userNumber);
    printf("The next number is %d\n", ++userNumber);
    printf("The next number is %d\n", ++userNumber);

    printf("The previous number is %d\n", --userNumber);
    printf("The previous number is %d\n", --userNumber);
    printf("The previous number is %d\n", --userNumber);
    printf("The previous number is %d\n", --userNumber);
    printf("The original number is %d\n", --userNumber);

    return 0;
}
