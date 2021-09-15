/* The following program illustrates two things: how to initialize an array of strings at definition time and how to print them using a
for loop: */


// NOTE:
/* Actually, the program does a bit more than that. It also gets you to rate the nine strings (in this case, movie titles) that you’ve
seen on a scale of 1 to 10 and then reuses our friendly bubble sort routine—but instead of going small to big, the sort reorders your
list from highest rating to lowest. There’s nothing wrong with going back and mixing in previously learned concepts when trying new
lessons—that’s how you start to build robust and interesting programs! */




// Example program #1 from Chapter 25 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter25ex1.c

/* This program declares and initializes an array of character
pointers and then asks for ratings associated  */

#include <stdio.h>


main()
{

       int i;
       int ctr = 0;
       char ans;

//Declaring our array of 9 characters and then initializing them
       char * movies[9] = {"Amour",                         // 1
                           "Argo",                          // 2
                           "Beasts of the Southern Wild",   // 3
                           "Django Unchained",              // 4
                           "Les Miserables",                // 5
                           "Life of Pi",                    // 6
                           "Lincoln",                       // 7
                           "Silver Linings Playbook",       // 8
                           "Zero Dark Thirty"};             // 9
 int movieratings[9]; // A corresponding array of 9 integers
                      // for movie ratings

       char * tempmovie = "This will be used to sort rated movies";
       int outer, inner, didSwap, temprating; // for the sort loop

       printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
       printf("Time to rate this year's best picture nominees:");

       for (i=0; i< 9; i++)
       {
           printf("\nDid you see %s? (Y/N): ", movies[i]);
           scanf(" %c", &ans);
           if ((toupper(ans)) == 'Y')
           {
               printf("\nWhat was your rating on a scale ");
               printf("of 1-10: ");
               scanf(" %d", &movieratings[i]);
               ctr++; // This will be used to print only movies
                      // you've seen
               continue;
           }
           else
           {
               movieratings[i] = -1;
           }
       }

    // Now sort the movies by rating (the unseen will go
    // to the bottom)

    for (outer = 0; outer < 8; outer++)
    {
        didSwap = 0;
        for (inner = outer; inner < 9; inner++)
        {
            if (movieratings[inner] > movieratings[outer])
            {
                tempmovie = movies[inner];
                temprating = movieratings[inner];
                movies[inner] = movies[outer];
                movieratings[inner] = movieratings[outer];
                movies[outer] = tempmovie;
                movieratings[outer] = temprating;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // Now to print the movies you saw in order
    printf("\n\n** Your Movie Ratings for the 2012 Oscar ");
    printf("Contenders **\n");
    for (i=0; i < ctr; i++)
    {
        printf("%s  rated a %d!\n", movies[i], movieratings[i]);
    }
    return(0);
}



/*
Figure 25.2 shows how the program sets up the movies array in memory. Each element is nothing more than a character pointer that contains
the address of a different person’s name. It’s important to understand that movies does not hold strings—just pointers to strings.

FIGURE 25.2 The movies array contains pointers to strings.
https://learning.oreilly.com/api/v2/epubs/urn:orm:book:9780133149869/files/graphics/25fig02.jpg
*/


/*
See, even though there is no such thing as a string array in C (because there are no string variables), storing character pointers in
movies makes the program act as though movies is a string array.

The program then loops through the nine movies in the array and asks the user whether he or she saw each one. If the answer is Y (or y
after it is converted with the toupper() function), the program goes on to ask for an integer rating of 1 to 10. It also increments a
counter (ctr) so the program will eventually know how many movies were seen. If the answer is N (or any character other than Y or y),
the rating of -1 is assigned to that movie, so it will fall to the bottom during the movie sort.

After the movies are all rated, a bubble sort is used to rate the movies best to worst. Isn’t it nice to know that you can use your sort
routine on string arrays? The sorted array is now ready to be printed.

However, THE for LOOP ITERATES ONLY ctr TIMES, MEANING THAT IT WILL NOT PRINT THE NAMES OF MOVIES YOU DIDN´T SEE.
*/



// THE ABSOLUTE MINIMUM
/*
The goal of this chapter was to get you thinking about the similarities between arrays and pointers. An array name is really just a
pointer that points to the first element in the array. Unlike pointer variables, an array name can’t change. This is the primary reason
an array name can’t appear on the left side of an equals sign.

Using pointers allows more flexibility than arrays. You can directly assign a string literal to a character pointer variable, whereas you
must use the strcpy() function to assign strings to arrays. You’ll see many uses for pointer variables throughout your C programming
career.

Key concepts from this chapter include:

• Use character pointers if you want to assign string literals directly.

• Use either array subscript notation or pointer dereferencing to access array and pointer values.

• Don’t use a built-in function to fill a character pointer’s location unless that character pointer was originally set up to point to a
  long string.
*/
