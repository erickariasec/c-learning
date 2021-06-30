// AVOIDING THE NEGATIVE

/*
Suppose you wanted to write an inventory program that tests whether the number of a certain item has fallen to
zero. The first part of the if might look like this:
    if (count == 0) {
Because the if is true only if count has a value of 0, you can rewrite the statement like this:
    if (!count) {     // Executes if's body only if count is 0
Again, the ! adds a little confusion to code. Even though you might save some typing effort with a fancy !, clearer
code is better than trickier code, and if (count == 0) { is probably better to use, despite the microsecond your
program might save by using !.
*/





//------------------------------------------------------------------------------------------------------------------------





// Example program #2 from Chapter 12 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter12ex2.c

/* This program asks for a last name, and if the user has a last
name that starts with a letter between P and Q, they will be sent to
a special room for their tickets. */

#include <stdio.h>


main()
{
  // set up an array for the last name and then get it from the user

  char name[25];
  printf("What is your last name? ");
  printf("(Please capitalize the first letter!)\n");
  scanf(" %s", name);
  //For a string array, you don't need the &

  if ((name[0] >= 'P') && (name[0] <= 'S'))
  {
    printf("You must go to room 2432 ");
    printf("for your tickets.\n");
  }
  else
  {
    printf("You can get your tickets here.\n");
  }

  return 0;
}


/*

If your user’s last name is Peyton, but she types it as peyton with a lowercase p, the program would not send
the user to Room 2432 because the logical operator checks only for capitals. Now, if you wanted to check for either,
you could use the following, more complicated, logical statement:

    if (((name[0] >= 'P') && (name[0] <= 'S')) || (name[0] >= 'p') && (name[0] >= 's'))
*/





