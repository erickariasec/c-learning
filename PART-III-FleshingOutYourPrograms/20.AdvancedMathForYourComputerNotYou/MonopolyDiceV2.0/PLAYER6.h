


{

dice1P6 = (rand() % 5) + 1;
dice2P6 = (rand() % 5) + 1;
totalDiceP6 = dice1P6 + dice2P6;


printf("\nIt is %s\'s turn\n", player6Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P6);
printf("SECOND DICE: %d\n", dice2P6);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP6);

}
