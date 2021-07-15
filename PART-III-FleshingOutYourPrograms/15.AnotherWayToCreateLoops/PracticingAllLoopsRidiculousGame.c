// PRACTICING ALL LOOPS

// We are going to create a programm in order to practice all loops.

#include <stdio.h>

#define YES 1
#define NO 2
#define MINIMUM_AGE 15
#define QUIT_GAME 0
#define ALONE 1
#define WITH_FRIENDS 2

main()
{
    // SET UP VARIABLES
    int outer, shortAnswer, userAge, quitUserNumber, selectPlayer, playersNumber, userGameNumber;
    int ctr = 0;
    char firstName[10];

    printf("\n\n\t\t\t\t\t\t---------------");
    printf("\n\t\t\t\t\t\tRIDICULOUS GAME\n");
    printf("\t\t\t\t\t\t---------------\n\n");

    printf("\t\t\t\t\t\t   AGE: +%d\n\n", MINIMUM_AGE);
    printf("\t\t\t\t\t\t---------------\n\n");

    printf("YOU\'LL NEVER KNOW WHAT YOU WILL FIND...\n\n");



    // ASK FOR NAME AND AGE
    printf("What is your name? (First Name Only)\n");
    scanf(" %s", firstName);



    // If user is less than MINIMUM_AGE this message will continue repeating to validate for a possible user mistake entering.
// DO WHILE LOOP
    do
    {
    printf("\nHow old are you %s?\n", firstName);
    scanf(" %d", &userAge);
        if (userAge < MINIMUM_AGE)
        {
            printf("\nSorry %s, your age is not enough to continue!\n\a", firstName);
            printf("Try to enter valid age, please!\n");
            printf("If you are less than %d, please quit this game, ELSE try a new time!\n", MINIMUM_AGE);
            printf("Press \'%d\' to END the game, or press a different number to try a new time.\n", QUIT_GAME);
            scanf(" %d", &quitUserNumber);
            if (quitUserNumber == 0)
            {
                printf("\n\nWe will be waiting for you until your age is enough!\n\a");
                printf("See you the next time, %s!\n\n", firstName);
                return 0;
            }
        }
    }
    while (userAge < MINIMUM_AGE);



    // GET ACCESS TO THE PARTICIPATE
    printf("\nLet\'s GO %s!\n\a", firstName);

    printf("\nDo you dare to play? (Select 1 for YES or 2 for NO)\n");
    printf("1. YES\n");
    printf("2. NO\n");
    scanf(" %d", &shortAnswer);
    if (shortAnswer == YES)
    {
        printf("\nI like your attitude, %s!", firstName);
    }
    else
    {
        printf("Not everyone has the opportunity to be part of this game...\n\n\a");
        printf("Are you sure to END this game? (Select 1 to END or 2 to CONTINUE)\n");
        printf("1. YES, I want to end, sorry!\n");
        printf("2. NO, I decided to continue, thanks!\n");
        scanf(" %d", &shortAnswer);
        if (shortAnswer == YES)
        {
            printf("\n\nOK, no problem %s!\n\a", firstName);
            printf("You just missed the chance to win wonderful prizes!\nBYE, BYE!\n\n");
            return 0;
        }
        else
        {
            printf("\nYou made the right decision...\n\a");
            printf("I promise you will not regret about this %s", firstName);
        }
    }



    // ENTRY THE GAME
    printf("\n\nDo you want to play alone or with your friends? (Press 1 to play ALONE, or 2 to play with FRIENDS)\n");
    printf("1. ALONE\n");
    printf("2. WITH FRIENDS\n");
    scanf(" %d", &selectPlayer);
    if (selectPlayer == ALONE)
    {
        printf("\nFantastic, it is better when you play alone!\n");
        playersNumber = 1;
    }
    else
    {
        printf("\nFantastic, it is better when you play with friends!\n");
        printf("\n\nPLEASE, BE CAREFUL WHEN CHOOSING THE NUMBER OF FRIENDS YOU WANT TO PLAY WITH\n\n\a");
        printf("ALERT: THIS COULD BE DEVASTING!!!!\n\n\n");
        printf("How many are you?\n");
        scanf(" %d", &playersNumber);
    }

    printf("\nHere %s your ticket%s\n", (playersNumber == 1) ? ("is") : ("are"), (playersNumber == 1) ? (".") : ("s."));



//FOR LOOP
    // PRINT TICKETS

    /* For ctr = 1 execute program one, after that increase 1 to ctr only if ctr <= PlayersNumber */
    for (ctr = 1; ctr <= playersNumber; ctr++)
    {
        printf("Ticket No. %d\n", ctr);
    }

    printf("\n\nAre you sure to continue? (Select 1 to CONTINUE or 2 to END)\n");
    printf("1. YES\n");
    printf("2. NO\n");
    scanf(" %d", &shortAnswer);
    if (shortAnswer == NO)
    {
        printf("\n\nGood decision, if you had continued, you would probably never quit the game!\n\n");
        printf("Thanks for playing %s!\n\n", firstName);
        return 0;
    }



    // LET'S PLAY
// WHILE LOOP
    while (playersNumber == 2 || playersNumber == 4 || playersNumber == 7)
    //((scanf(" %d", &playersNumber) != 1) || (scanf(" %d", &playersNumber) != 3) || (scanf(" %d", &playersNumber) != 5) || (scanf(" %d", &playersNumber) != 6))
    // (playersNumber == 2 || playersNumber == 4 || playersNumber == 7) //|| (playersNumber = 3) || (playersNumber = 5) || (playersNumber != 6))
    {
        printf("You lost!\n");
    }


    // WIN OPTION
    printf("\n\nYou win %s!\n\n\n\a", firstName);
    return 0;
}






/*
WHILE
while (condition)
{ block of one or more C statements; }
while (ctr < 5)
{
    printf("Counter is at %d.\n", ++ctr);
}
*/



/*
DO WHILE
do
{ block of one or more C statements; }
while (condition)
do {
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N): ");
        scanf(" %c", &choice);
   } while (choice != 'N');
*/



/*
FOR
for (startExpression; testExpression; countExpression)
{ block of one or more C statements; }
for (ctr = 1; ctr <= 5; ctr++)
{
    printf("Counter is at %d.\n", ctr);
}

for (outer = 1; outer <= 3; outer++)
{
       for (inner = 1; inner <= 5; inner++)
       {
              printf("%d ", inner)
       }
       // Print a newline when each inner loop finishes
       printf("\n");
}
*/

