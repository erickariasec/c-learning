


{

dice1P8 = (rand() % 5) + 1;
dice2P8 = (rand() % 5) + 1;
totalDiceP8 = dice1P8 + dice2P8;


printf("\nIt is %s\'s turn\n", player8Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P8);
printf("SECOND DICE: %d\n", dice2P8);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP8);

}
