


{

dice1P4 = (rand() % 5) + 1;
dice2P4 = (rand() % 5) + 1;
totalDiceP4 = dice1P4 + dice2P4;


printf("\nIt is %s\'s turn\n", player4Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P4);
printf("SECOND DICE: %d\n", dice2P4);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP4);

}
