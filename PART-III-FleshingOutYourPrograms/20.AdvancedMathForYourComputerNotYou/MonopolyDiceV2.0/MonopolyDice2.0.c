// MONOPOLY DICE

/*
1. Set number of players.
2. Enter number of players.
3. Randomize two dices.
4. Create player next turn.
*/

#include <stdio.h> // for: printf(), scanf(), puts(), gets(), putchar(), getchar(), putch(), getch()
#include <stdlib.h> // for: exit(), rand(), srand()
#include <time.h> // for: time_t (var declaration)

main()

{
    time_t t;
    int dice1P1, dice2P1, totalDiceP1, dice1P2, dice2P2, totalDiceP2, dice1P3, dice2P3, totalDiceP3, dice1P4, dice2P4, totalDiceP4;
    int dice1P5, dice2P5, totalDiceP5, dice1P6, dice2P6, totalDiceP6, dice1P7, dice2P7, totalDiceP7, dice1P8, dice2P8, totalDiceP8;
    int numPlayers;
    int ctr1, ctr2;
    char player1Name[10], player2Name[10], player3Name[10], player4Name[10], player5Name[10], player6Name[10], player7Name[10], player8Name[10];



    printf("\n\n\t\t\t\t\t\tMONOPOLY DICE\n");
    printf("\t\t\t\t\t\t-------------\n\n");

    do
    {
        printf("How many players are you? (MIN 2 - MAX 8)\n");
        scanf(" %d", &numPlayers);

        if (numPlayers >= 2 && numPlayers <= 8)
        {
            printf("\nEmter the player\'s name:\n\n");
        }


        switch(numPlayers)
        {
            case(2): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                     }
                     while (numPlayers == 2);
                     break;

            case(3): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);
                     printf("Player 3: ");
                     scanf(" %s", player3Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                         #include "PLAYER3.h"
                     }
                     while (numPlayers == 3);
                     break;

            case(4): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);
                     printf("Player 3: ");
                     scanf(" %s", player3Name);
                     printf("Player 4: ");
                     scanf(" %s", player4Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                         #include "PLAYER3.h"
                         #include "PLAYER4.h"
                     }
                     while (numPlayers == 4);
                     break;

            case(5): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);
                     printf("Player 3: ");
                     scanf(" %s", player3Name);
                     printf("Player 4: ");
                     scanf(" %s", player4Name);
                     printf("Player 5: ");
                     scanf(" %s", player5Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                         #include "PLAYER3.h"
                         #include "PLAYER4.h"
                         #include "PLAYER5.h"
                     }
                     while (numPlayers == 5);
                     break;

            case(6): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);
                     printf("Player 3: ");
                     scanf(" %s", player3Name);
                     printf("Player 4: ");
                     scanf(" %s", player4Name);
                     printf("Player 5: ");
                     scanf(" %s", player5Name);
                     printf("Player 6: ");
                     scanf(" %s", player6Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                         #include "PLAYER3.h"
                         #include "PLAYER4.h"
                         #include "PLAYER5.h"
                         #include "PLAYER6.h"
                     }
                     while (numPlayers == 6);
                     break;

            case(7): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);
                     printf("Player 3: ");
                     scanf(" %s", player3Name);
                     printf("Player 4: ");
                     scanf(" %s", player4Name);
                     printf("Player 5: ");
                     scanf(" %s", player5Name);
                     printf("Player 6: ");
                     scanf(" %s", player6Name);
                     printf("Player 7: ");
                     scanf(" %s", player7Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                         #include "PLAYER3.h"
                         #include "PLAYER4.h"
                         #include "PLAYER5.h"
                         #include "PLAYER6.h"
                         #include "PLAYER7.h"
                     }
                     while (numPlayers == 7);
                     break;

            case(8): printf("Player 1: ");
                     scanf(" %s", player1Name);
                     printf("Player 2: ");
                     scanf(" %s", player2Name);
                     printf("Player 3: ");
                     scanf(" %s", player3Name);
                     printf("Player 4: ");
                     scanf(" %s", player4Name);
                     printf("Player 5: ");
                     scanf(" %s", player5Name);
                     printf("Player 6: ");
                     scanf(" %s", player6Name);
                     printf("Player 7: ");
                     scanf(" %s", player7Name);
                     printf("Player 8: ");
                     scanf(" %s", player8Name);

                     do
                     {
                         srand(time(&t)); // This is necessary to randomize numbers.

                         #include "PLAYER1.h"
                         #include "PLAYER2.h"
                         #include "PLAYER3.h"
                         #include "PLAYER4.h"
                         #include "PLAYER5.h"
                         #include "PLAYER6.h"
                         #include "PLAYER7.h"
                         #include "PLAYER8.h"
                     }
                     while (numPlayers == 8);
                     break;

            default: printf("\nSorry, min players required are 2 and max 8\n\a");
                     printf("Enter a valid number!\n\n");
        }
    }
    while (numPlayers < 2 || numPlayers > 8);

    printf("\nAll user names have been successful registered!\n\n\a");
    printf("Let\'s roll the dice");

    printf("It is ");

    return 0;
}
