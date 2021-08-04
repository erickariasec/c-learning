/* Let’s use a simple program that combines both methods of entering data in an array. This program keeps track of
how many points a player scored in each of 10 basketball games. The first six scores are entered when the array is
initialized, and then the user is asked for the player’s scores for games 7–10. After all the data is entered, the
program loops through the 10 scores to compute average points per game: */





// Example program #1 from Chapter 21 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter21ex1.c

/* This program creates an array of 10 game scores for a basketball player.
   The scores from the first six games are in the program and the scores from the last four are inputted by the user.*/

#include <stdio.h>


main()
{

    int gameScores[10] = {12, 5, 21, 15, 32, 10};
    int totalPoints = 0;
    int i;
    float avg;

    // Only need scores for last 4 games so the loop will cover
    // array elements 6-9
    for (i=6; i < 10; i++)
    {
        // Add one to the array number as the user won't think
        // of the first game as game 0, but game 1
        printf("What did the player score in game %d? ", i+1);
        scanf(" %d", &gameScores[i]);
    }

    // Now that you have all 10 scores, loop through the scores
    // to get total points in order to calculate an average.

    for (i=0; i<10; i++)
    {
        totalPoints += gameScores[i];
    }

    // Use a floating-point variable for the average as it is
    // likely to be between two integers

    avg = ((float)totalPoints/10);

    printf("\n\nThe Player's scoring average is %.1f.\n", avg);

    return(0);
}


/*
So this program is designed to show you two different ways you can add values to a variable array. It’s a bit
impersonal, so if you wanted, you could add a string array for the player’s name at the beginning of the program;
then the prompts for the individual game scores and the final average could incorporate that name.
*/
