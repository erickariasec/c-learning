// AVERAGE OF 25 STUDENTS
// TAKE A BREAK

/* As a real-world example, suppose a teacher wrote a program to average the 25 students’ test scores. The following
program keeps a running total of the 25 students. However, if a student or two missed the test, the teacher wouldn’t
want to average the entire 25 student scores. If the teacher enters a -1.0 for a test score, the -1.0 triggers the
break statement and the loop terminates early. */




// Example program #1 from Chapter 16 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter16ex1.c

/* This program will ask users to input test grades for the 25 students in a class and then compute an average test grade. If fewer than 25 students took the test, the user can enter -1 as a grade and break the loop, and only those entered grades will be used to compute the average. */

#include <stdio.h>

main()
{

    int numTest;
    float stTest, avg, total = 0.0;

    // Asks for up to 25 tests

    for (numTest = 0; numTest < 25; numTest++)
        {
                // Get the test scores, and check if -1 was entered

                printf("\nWhat is the next student's test score? ");
                scanf(" %f", &stTest);
                if (stTest < 0.0)
                {
                  break;
                }
                total += stTest;
        }

    avg = total / numTest;
    printf("\nThe average is %.1f%%.\n", avg);

    return 0;

    }

/* The teacher had a lot of sick students that day! If all 25 students had shown up, the for loop would have
ensured that exactly 25 test scores were asked for. However, because only five students took the test, the
teacher had to let the program know, via a negative number in this case, that she was done entering the scores
and that she now wanted an average. */


/* break simply offers an early termination of a while, do-while, or for loop. break can’t exit from if, which
isn’t a loop statement.


                printf("How many numbers do you want to see?");
                scanf(" %d", %num);
                for (i = 1; i < 10; i++)
           |------> {
           |            printf("Counting up...%d\n", i);
   Normal  |            if (i == num)
   flow of |                {
   the loop|                    break; --------------|
           |                }                        | If breaks
           |------  }                                | executes
                    // Rest of program follows.  <---|





// HOW TO PRINT PERCENTAGE SIGN

/* To print the percent sign at the end of the final average, two % characters have to be used in the printf()
control string.
C interprets a percent sign as a control code unless you put two of them together, as done in this program.
Then it still interprets the first percent sign as a control code for the second. In other words, the percent
sign is a control code for itself.
*/
