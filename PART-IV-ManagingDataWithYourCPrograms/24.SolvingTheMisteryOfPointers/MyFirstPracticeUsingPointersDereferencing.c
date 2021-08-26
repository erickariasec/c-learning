/* STUDENT SCHOLARSHIPS */

/* The cost per semester is $3200 at UTLA */

#include <stdio.h>

main()

{
    // SET UP VARIABLES AND POINTERS
    char name[50];
    char * pName;
    float semesterCost;
    float * pSemesterCost;
    int category;
    int * pCategory;


    printf("\n\n\t\t\t\t\t\tWELCOME TO UTLA UNIVERSITY\n");
    printf("\t\t\t\t\t\t--------------------------\n\n");
    printf("\t\t\t\t\t\t    STUDENT SCHOLARSHIP\n\n\n");


    semesterCost = 3200;
    pSemesterCost = &semesterCost;

    printf("What is your name?\n");
    gets(&name);

    pName = &name;

    printf("\n\nSelect the category you want to apply:\n\n");
    printf("1. Socioeconomic Scholarship\n");
    printf("2. Sports Scholarship\n");
    printf("3. Academic Excellence Scholarship\n");
    printf("4. Artistic and Cultural Scholarship\n");
    printf("5. Consanguinity Scholarship\n");
    printf("Press a different number if you want to see Total Semester Cost.");

    printf("\n\nEnter your choice: ");
    scanf(" %d", &category);
    printf("\n\n");

    pCategory = &category;

    switch(*pCategory)
    {
        case(1): printf("Socioeconomic Scholarship has a discount of 50%% on the Total Semester Cost: $%.2f\n\a", *pSemesterCost);
                 printf("Total Semester Cost after accessing to this scholarship: $%.2f\n\n", (*pSemesterCost * .50));
                 break;
        case(2): printf("Sports Scolarship has a discount of 25%% on the Total Semester Cost: $%.2f\n\a", *pSemesterCost);
                 printf("Total Semester Cost after accessing to this scholarship: $%.2f\n\n", (*pSemesterCost * .75));
                 break;
        case(3): printf("Academic Excellence Scholarship has a discount of 80%% on the Total Semester Cost: $%.2f\n\a", *pSemesterCost);
                 printf("Total Semester Cost after accessing to this scholarship: $%.2f\n\n", (*pSemesterCost * .20));
                 break;
        case(4): printf("Artistic and Cultural Scholarship has a discount of 20%% on the Total Semester Cost: $%.2f\n\a", *pSemesterCost);
                 printf("Total Semester Cost after accessing to this scholarship: $%.2f\n\n", (*pSemesterCost * .80));
                 break;
        case(5): printf("Consanguinity Scholarship has a discount of 60%% on the Total Semester Cost: $%.2f\n\a", *pSemesterCost);
                 printf("Total Semester Cost after accessing to this scholarship: $%.2f\n\n", (*pSemesterCost * .40));
                 break;
        default: printf("Total Semester Cost: $%.2f\n\n\a", *pSemesterCost);
    }

    printf("REMEMBER: If you fail a semester, you will have to pay normal price for next semesters until you finish University.\n\n");
    return 0;
}


