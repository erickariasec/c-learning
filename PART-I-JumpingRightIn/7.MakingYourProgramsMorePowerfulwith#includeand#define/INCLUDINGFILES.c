/*  PREPROCESSOR DIRECTIVES
    Always begin with a pound sign (#)
    They work during the compiling your program
    Most common:
    ◘ #include
    ◘ #define
*/


/*  INCLUDING FILES
    #include <filename>
    #include "filename"

    #include "MYFILE.TXT"
    #include "myfile.txt"
    #include "myFile.txt"   (UNIX only allows this)

    Various #include files come with your compiler
    When you want to use one of these built-in #include files, use the #include format with the angled brackets, < and >.

    The file you include is called a header file. That’s why most included files end in the extension .h

    When you write your own header files, use the second form of the preprocessor
    directive, the one that has quotation marks.

    You might write your own header files when you have program statements that you frequently use in many programs.
*/




/* INTERNET EXAMPLE */
//--------------------------------------------------------------------------------------------------------------------


/* SAVING YOUR FILE */

// It is not recommended to put function definitions
// in a header file. Ideally there should be only
// function declarations. Purpose of this code is
// to only demonstrate working of header files.
// SAVE FILE AS: myhead.h


/*
void add(int a, int b)
{
	printf("Added value=%d\n", a + b);
}
void multiply(int a, int b)
{
	printf("Multiplied value=%d\n", a * b);
}
*/

//--------------------------------------------------------------------------------------------------------------------


/* CALLING YOUR FILE */


/*
// C program to use the above created header file
#include <stdio.h>
#include "myheadExampleInternet.h"
*/

//int main()
//{
//	add(4, 6);

	/*This calls add function written in myhead.h
	and therefore no compilation error.*/
//	multiply(5, 5);

	// Same for the multiply function in myhead.h
//	printf("BYE!See you Soon");
//	return 0;
//}

