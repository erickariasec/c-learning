


{

dice1P7 = (rand() % 5) + 1;
dice2P7 = (rand() % 5) + 1;
totalDiceP7 = dice1P7 + dice2P7;


printf("\nIt is %s\'s turn\n", player7Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P7);
printf("SECOND DICE: %d\n", dice2P7);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP7);

}
