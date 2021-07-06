// WIN A FAMILY TRIP

/* We are going to create a program, where you will have the opportunity to win a family trip, you need to insert
names of your family nucleus that currently live with you, one conventional number to contact you if you are the
winners. You will have three opportunities to choose the three winner numbers, if not, you are going to receive some
discounts at this store. */

#include <stdio.h>

#define FIRST_WINNER_NUMBER 18
#define SECOND_WINNER_NUMBER 42
#define THIRD_WINNER_NUMBER 33

#define YES 1
#define NO 2

main()
{
    printf("\n\n\t\t\t\t\t\tSANTA MARIA SUPERMARKET\n");
    printf("\t\t\t\t\t\t-----------------------\n\n");

    printf("For purchases over $ 25 you will receive a coupon to participate and have the opportunity to win a trip");
    printf(" for you and your family to the Galapagos Islands.\n\n");  // PROMOTION

    printf("Enter valid family information, if you are the winners, we are going to verify information.\n");
    printf("Enter information for each member of your family that lives with you at home.\n\n");

    // SET UP VARIABLES
    char personFirstName[20];
    char personLastName[20];
    char email[40];
    char conventionalNumber[15];
    char province[15];
    char city[15];

    int shortAnswer, userFirstNumber, userSecondNumber, userThirdNumber;


    // ASK FOR FAMILY MEMBERS NAME, LAST NAME AND EMAIL
    do {
        printf("First name: ");
        scanf(" %s", personFirstName);

        printf("Last name: ");
        scanf(" %s", personLastName);

        printf("Email: ");
        scanf(" %s", email);

        printf("\nDo you want to enter another family member?  (Select 1 for YES, or 2 for NO)\n");
        printf("1. YES\n");
        printf("2. NO\n");
        scanf(" %d", &shortAnswer);
        printf("\n\n");
       }
    while (shortAnswer != NO);


    // ASK FOR PROVINCE, CITY AND PHONE NUMBER
    printf("Province: ");
    scanf(" %s", province);

    printf("City: ");
    scanf(" %s", city);

    printf("Conventional Number: ");
    scanf(" %s", conventionalNumber);


    // REGISTRATION MESSAGE
    printf("\n\n\nFantastic! Now you and your family are registered for participating on this game.\n\a");
    printf("If you are the winners we are going to contact you to this number: %s.\n\n\n", conventionalNumber);


    // GAME
    printf("LET\'S PLAY THE GAME, GOOD LUCK!\n\n\n");

    printf("\n\n\t\t\t\t\t\tWIN A FAMILY TRIP\n");
    printf("\t\t\t\t\t\t-----------------\n\n\n");

    printf("INSTRUCTIONS:\n\n");
    printf("1. You have to choose a number from 1 to 50.\n");
    printf("2. You will have 3 opportunities.\n");
    printf("3. There are 3 winner numbers.\n\n\n");


        // FIRST NUMBER
    printf("Enter your First Number: ");
    scanf(" %d", &userFirstNumber);
    if ((userFirstNumber == FIRST_WINNER_NUMBER) || (userFirstNumber == SECOND_WINNER_NUMBER) || (userFirstNumber == THIRD_WINNER_NUMBER))
    {
        printf("\n\n\nWOW, YOU WIN! YOU AND YOUR FAMILY ARE GOING TO TRAVEL TO GALAPAGOS ISLANDS!\a\n\n");
        printf("ALL EXPENSES PAID!\n\n");
        printf("In the course of the day we are going to contact you!\n\n");
        return 0;
    }
    else
    {
        printf("\n\n\nSorry, that is not the winner number, try a new time!\a\n\n");
    }


        // SECOND NUMBER
    printf("\n\nEnter your Second Number: ");
    scanf(" %d", &userSecondNumber);
    if ((userSecondNumber == FIRST_WINNER_NUMBER) || (userSecondNumber == SECOND_WINNER_NUMBER) || (userSecondNumber == THIRD_WINNER_NUMBER))
    {
        printf("\n\n\nWOW, YOU WIN! YOU AND YOUR FAMILY ARE GOING TO TRAVEL TO GALAPAGOS ISLANDS!\a\n\n");
        printf("ALL EXPENSES PAID!\n\n");
        printf("In the course of the day we are going to contact you!\n\n");
        return 0;
    }
    else
    {
        printf("\n\n\nSorry, that is not the winner number, try the last time!\a\n\n");
    }


        // THIRD NUMBER
    printf("\n\nEnter your Third Number: ");
    scanf(" %d", &userThirdNumber);
    if ((userThirdNumber == FIRST_WINNER_NUMBER) || (userThirdNumber == SECOND_WINNER_NUMBER) || (userThirdNumber == THIRD_WINNER_NUMBER))
    {
        printf("\n\n\nWOW, YOU WIN! YOU AND YOUR FAMILY ARE GOING TO TRAVEL TO GALAPAGOS ISLANDS!\a\n\n");
        printf("ALL EXPENSES PAID!\n\n");
        printf("In the course of the day we are going to contact you!\n\n");
        return 0;
    }
    else
    {
        printf("\n\n\nSorry, that is not the winner number, you LOSE the game!\a\n\n");
        printf("But don\'t be sad, we really appreciate you!\n\n");
        printf("You are going to receive 10 percentage of DISCOUNT on your next purchase!\n\n\a");
        printf("\n\nTHANK YOU VERY MUCH FOR PARTICIPATING!\n\n\n");
    }

    return 0;
}


