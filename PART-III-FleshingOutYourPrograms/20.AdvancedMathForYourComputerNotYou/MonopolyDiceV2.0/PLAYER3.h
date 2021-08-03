


{

dice1P3 = (rand() % 5) + 1;
dice2P3 = (rand() % 5) + 1;
totalDiceP3 = dice1P3 + dice2P3;


printf("\nIt is %s\'s turn\n", player3Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P3);
printf("SECOND DICE: %d\n", dice2P3);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP3);

}
