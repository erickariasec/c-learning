// MONOPOLY DICE

// NOT RUNNING RIGHT NOW!!!!!!!!!!!

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
    int numPlayers;
    int ctr1, ctr2;
    char playerName[10];

    srand(time(&t)); // This is necessary to randomize numbers.

    printf("\n\n\t\t\t\t\t\tMONOPOLY DICE\n");
    printf("\t\t\t\t\t\t-------------\n\n");

    printf("Enter the number of players: (8 Max) ");
    scanf(" %d", &numPlayers);

    printf("\nEnter the name of players: \n\n");

    for (ctr1 = 1; ctr1 <= numPlayers; ctr1++)
    {
        printf("Player %d: ", ctr1);
        scanf(" %s", playerName);
    }

    ctr1 = 0;

    printf("\nIT\'S TIME TO PLAY!\n\n\a");

    for (ctr1 = 1; ctr1 <= numPlayers && numPlayers > 0; ctr1-- && numPlayers--)
        {
            printf("Player %d turn!\n", numPlayers);
            getch('\n');
        }

    ctr1 = 0;

    /*for (ctr1 = numPlayers; ctr1 >= 1 && numPlayers >= 1; ctr1-- && numPlayers--)
        {
            printf("Player %d turn!\n", numPlayers);
            getch();
        }*/

    /*//do
    //{
        for (ctr2 = numPlayers; ctr2 >= 1 && numPlayers >= 1; ctr2++ && numPlayers--)
        {
            printf("Player %d turn!\n", numPlayers);
            getch();
        }
    //}
    //while (ctr2 >= 1);*/

    return 0;
}
