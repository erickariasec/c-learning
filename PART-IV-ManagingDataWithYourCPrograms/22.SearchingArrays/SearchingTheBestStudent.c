// SEARCHING THE BEST STUDENT IN THE CLASS

/*
1. Create a list of 10 students
2. Assign their scores
3. Search for the best student through calculating average.
4. Search for the worst student through calculating average.
*/


#include <stdio.h>

main()
{
    // SET UP VARIABLES
    int studentNum;
    /*char studentName[10][12] = {Arias, Carranza, Figueroa, Granizo, Jacome,
                                Lema, Pozo, Toro, Villarroel, Zurita};*/
    float mathScore[10] = {7.5, 6.5, 8.3, 7.4, 9.2,
                            5.8, 8.1, 5.7, 9.5, 7.4};
    float languageScore[10] = {9.1, 6.1, 8.4, 8.7, 8.75,
                                7.56, 8.49, 6.66, 9.1, 7.0};
    float historyScore[10] = {8.91, 8.0, 9.4, 9.5, 9.3,
                                7.49, 9.1, 8.43, 8.66, 8.12};
    float englishScore[10] = {9.8, 6.46, 7.2, 8.1, 7.46,
                            8.55, 7.21, 7.12, 8.4, 8.0};
    float totalAverage[10] = {};
    int searchTotalAverage;
    int bestStudent = 0;
    int bestScore = 0;
    int worstScore = 0;
    int i;


    printf("\n\n\t\t\t\t\t\t\tSTUDENTS LIST\n");
    printf("\t\t\t\t\t\t\t-------------\n\n");
    printf("1. Arias\n2. Carranza\n3. Figueroa\n4. Granizo\n5. Jacome\n");
    printf("6. Lema\n7. Pozo\n8. Toro\n9. Villarroel\n10. Zurita\n");

    //printf("\nEnter the number of the student you want to search total score average: ");
    //scanf(" %d", &searchTotalAverage);

    for (i = 0; i < 10; i++)
    {
        totalAverage[i] = ((mathScore[i] + languageScore[i] + historyScore[i] + englishScore[i]) / 4);
        if (totalAverage[i] > totalAverage[bestScore])
        {
            bestScore = i;
        }
        else if (totalAverage[i] < totalAverage[worstScore])
        {
            worstScore = i;
        }
    }
    /*printf("\nMath: %.2f\n", mathScore[searchTotalAverage]);
    printf("Language: %.2f\n", languageScore[searchTotalAverage]);
    printf("History: %.2f\n", historyScore[searchTotalAverage]);
    printf("English: %.2f\n", englishScore[searchTotalAverage]);*/
    //printf("\nThe score average is: %.2f\a\n\n", totalAverage[searchTotalAverage]);
    printf("\nThe best score average is: %.2f from student No. %d!\a\n\n", totalAverage[bestScore], bestScore+1);
    printf("\nThe worst score average is: %.2f from student No. %d!\a\n\n", totalAverage[worstScore], worstScore+1);
    return 0;
}
