


{

dice1P5 = (rand() % 5) + 1;
dice2P5 = (rand() % 5) + 1;
totalDiceP5 = dice1P5 + dice2P5;


printf("\nIt is %s\'s turn\n", player5Name);
printf("Press ENTER to roll the dice!\n\n");
getch();
printf("FIRST DICE: %d\n", dice1P5);
printf("SECOND DICE: %d\n", dice2P5);
printf("ADVANCE: %d spaces\n\n\a", totalDiceP5);

}
