// PRACTICING ALL CONDITIONALS

// Here we are going to practice all conditional forms in order to remember them in the future
// This is a program about vistiting an SCAPE ROOM

#include <stdio.h>

#define MIN_AGE_REQUIRED 18
#define MAX_PEOPLE_ALLOWED 15
#define MIN_PEOPLE_REQUIRED 3
#define TICKET_COST 8
#define ANABELLE_ROOM 1 // >3 && <=8
#define HOSPITAL_ROOM 2 // >8 && <=15
#define YES 1
#define NO 2

main()
{
    // SET UP VARIABLES
    int peopleGroup, personAge, shortAnswer, totalBill;
    int ticketCtr = 0;

    char personFirstName[10];

    // AD
    printf("\n\n\t\t\t\t\t\t\t SCAPE ROOM\n");
    printf("\t\t\t\t\t\t\t ----------\n\n");

    printf("\t\t\t\t\t\t\tTICKET COST:\n\n");
    printf("\t\t\t\t\t\t\tAnabelle: $%d\n", TICKET_COST);
    printf("\t\t\t\t\t\t\tHospital: $%d\n\n\n", TICKET_COST);



    // EXECUTING QUESTIONS
    printf("What\'s your name? (Only First Name)\n");
    scanf(" %s", personFirstName);

    printf("\nWelcome to Scape Room %s!\n\n", personFirstName);

    printf("How old is the youngest person in your group?\n");
    scanf(" %d", &personAge);



    // AGE CONDITIONAL
    if (personAge < MIN_AGE_REQUIRED)
    {
        printf("Sorry, you could not entry with that person!\n\a");
        printf("Minimum Age Required is %d.\n\n", MIN_AGE_REQUIRED);

        printf("Do you want to continue without that person? (Write 1 for YES, or 2 for NO)\n");
        printf("1. YES\n");
        printf("2. NO\n");
        scanf(" %d", &shortAnswer);


        // CONDITIONAL FOR CONTINUING OR ENDING THE PROGRAM (AGE)
        if (shortAnswer == YES)
        {
            printf("\nOK, Let\'s go!\n\n");
        }
        else
        {
            printf("\nNo problem, we will be waiting for you and your group until the next time!\n\a");
            printf("See you %s!\n\n", personFirstName );
            return 0;
        }
    }

    else
    {
        printf("Cool! All you are ready to enjoy our scape rooms!\n\n");
    }



    // SELECT ROOM
    printf("Which room would you like to play? (Select 1 or 2)\n");
    printf("1. Anabelle Room\n");
    printf("2. Hospital Room\n");
    scanf(" %d", &shortAnswer);

    printf("\nHow many people are you?\n");
    scanf(" %d", &peopleGroup);



        // ROOM CONDITIONAL
    if ((peopleGroup >= MIN_PEOPLE_REQUIRED) && ((peopleGroup <= 8)) && (shortAnswer == ANABELLE_ROOM) || (shortAnswer == HOSPITAL_ROOM))
    {
        printf("\nPerfect, here are your tickets:\n\n");
    }


    else if (peopleGroup < MIN_PEOPLE_REQUIRED) // CONDITIONAL FOR MIN PEOPLE REQUIRED
    {
        printf("Sorry %s! You need 3 people minimum to play any of our games!\n\n\a", personFirstName);
        return 0;
    }


    else if ((shortAnswer == ANABELLE_ROOM) && (peopleGroup > 8)) // CONDITIONAL FOR DENYING ACCESS TO ANABELL ROOM (MAX 8)
    {
        printf("Oh, no! You are too much Anabelle Room is only for 8 people maximum.\n\n\a");

        printf("Would you like to take Hospital Room? (Write 1 for YES, or 2 for NO)\n");
        printf("1. YES, we want!\n");
        printf("2. NO, we prefer to come another time, thanks!\n");
        scanf(" %d", &shortAnswer);

            // CONDITIONAL IF PEOPLE DON'T WANT HOSPITAL ROOM
        if (shortAnswer == YES)
        {
            printf("\nPerfect, here are your tickets:\n\n");
        }
        else
        {
            printf("\nWe really sorry!\n\a");
            printf("We hope see you soon %s!\n", personFirstName);
            return 0;
        }
    }

    else if (peopleGroup > MAX_PEOPLE_ALLOWED) // STOP PROGRAM IF YOU EXCEED MAX PEOPLE ALLOWED
    {
        printf("Sorry %s! We don´t have enough space for all of you!\n\n\a", personFirstName);
        printf("SEE YOU SOON!\n\n");
        return 0;
    }



    // PRINT TICKETS
    // CREATING A FOR LOOP
    for (ticketCtr = 1; ticketCtr <= peopleGroup; ticketCtr++)
    {
        printf("Ticket No. %d\n\a", ticketCtr);
    }



    // BILL CALCULATION
    totalBill = (peopleGroup * TICKET_COST);



    // BILL PRINT
    printf("\n\nHere is your total bill: $%d", totalBill);



    // CONDITIONAL FOR ONE LINE PRINTING
    printf("\n\n\nEnjoy playing %s Room!\n", (shortAnswer == ANABELLE_ROOM) ? ("Anabelle") : ("Hospital"));

    printf("Take care of yourselves!\n");
    printf("It\'s really scaring!\n\n\a");
    return 0; // END PROGRAM!
}



// ALL CONDITIONAL EXAMPLES


/*
IF ELSE CONDITIONAL
if (condition)
{block of one or more C statements;}
else
{ block of one or more C statements; }
*/



/* LOGICAL OPERATATORS
&& AND
|| OR
! NOT
if ((age >= 21) && (age <= 65))
{
printf();
}
*/



/*
CONDITIONAL
(relation) ? (trueStatement) : (falseStatement);
printf("I ate %d pear%s\n", numPear, (numPear>1) ? ("s.") : ("."));
I ate 4 pears.
*/



/*
INCREMENT AND DECREMENT OPERATORS
++
--
int i = 2, j = 5, n;
n = ++i * j;

n = i++ * j;  /* Puts 10 in n and 3 in i */
