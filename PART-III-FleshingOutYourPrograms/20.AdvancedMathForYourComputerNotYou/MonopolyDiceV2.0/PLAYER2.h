


{

dice1P2 = (rand() % 5) + 1;
dice2P2 = (rand() % 5) + 1;
totalDiceP2 = dice1P2 + dice2P2;


printf("\nIt is %s\'s turn\n", player2Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P2);
printf("SECOND DICE: %d\n", dice2P2);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP2);

}
