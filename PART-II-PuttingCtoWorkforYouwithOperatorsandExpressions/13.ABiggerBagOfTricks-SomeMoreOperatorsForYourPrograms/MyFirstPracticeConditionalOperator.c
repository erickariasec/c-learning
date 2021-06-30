// MY FIRST PRACTICE USING CONDITIONAL OPERATOR

// Create a program for checking if you pass your subjects or not.

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int mathScore, scienceScore, languageScore, physicScore;
    char name[25];

    printf("\n\n\t\t\t\t\t\tCHECK IF YOU PASS OR FAIL\n\n");

    printf("What is your first name?\n");
    scanf(" %s", name);

    // ASK FOR SCORES
    printf("\nHow much did you get on Math?\n");
    scanf(" %d", &mathScore);
    printf("Oh, you %s a good score on Math, you %s", (mathScore >= 70) ? ("get") : ("don\'t get"), (mathScore >= 70) ? ("pass. Congratulations!") : ("fail. Sorry!"));

    printf("\n\nHow much did you get on Science?\n");
    scanf(" %d", &scienceScore);
    printf("Oh, you %s a good score on Science, you %s", (scienceScore >= 70) ? ("get") : ("don\'t get"), (scienceScore >= 70) ? ("pass. Excelent. Congratulations!") : ("fail. That is not good, sorry!"));

    printf("\n\nHow much did you get on Language?\n");
    scanf(" %d", &languageScore);
    printf("Oh, you %s a good score on Language, you %s", (languageScore >= 70) ? ("get") : ("don\'t get"), (languageScore >= 70) ? ("pass. You got it. Congratulations!") : ("fail. Oh no, sorry!"));

    printf("\n\nHow much did you get on Physic?\n");
    scanf(" %d", &physicScore);
    printf("Oh, you %s a good score on Physic, you %s", (physicScore >= 70) ? ("get") : ("don\'t get"), (physicScore >= 70) ? ("pass. Congratulations!") : ("fail. Sorry!"));


    // PRINTS IF YOU PASS OR FAIL
    if ((mathScore >= 70) && (scienceScore >= 70) && (languageScore >= 70) && (physicScore >= 70))
    {
        printf("\n\n\nCONGRATULATIONS %s, you pass the school year!\a\n\n\n", name);
    }
    else
    {
        printf("\n\n\nSORRY %s, you fail the school year!\a\n\n\n", name);
    }
}
