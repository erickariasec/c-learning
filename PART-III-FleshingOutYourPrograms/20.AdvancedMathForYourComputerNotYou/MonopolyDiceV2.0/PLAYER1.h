


{

dice1P1 = (rand() % 5) + 1;
dice2P1 = (rand() % 5) + 1;
totalDiceP1 = dice1P1 + dice2P1;


printf("\nIt is %s\'s turn\n", player1Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P1);
printf("SECOND DICE: %d\n", dice2P1);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP1);

}
