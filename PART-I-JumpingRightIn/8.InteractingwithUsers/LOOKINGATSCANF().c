/* scanf() is the easiest function to use for input at this point, its close ties to the printf() function. */

/* scanf() is a built-in C function that comes with all C compilers. Its header file is the same as printf() (stdio.h),
so you don’t have to worry about including an additional header file for scanf(). scanf() fills variables with
values typed by the user. */

// scanf() is fairly easy if you know printf()
// scanf() uses conversion codes such as %s and %d.
// scanf() is the mirror-image function of printf()

/*

Here is the scanf() format:
scanf(controlString [, data]);

*/

// When your program gets to scanf(), C stops and waits for the user to type values.
// The variables listed inside scanf() (following the controlString) will accept whatever values the user types.
// scanf() quits when the user presses Enter after typing values.

/* Even though scanf() uses the same conversion characters as printf(), never specify escape sequences such
as \n, \a, or \t. Escape sequences confuse scanf(). scanf() quits getting values from the user when the user
presses Enter, so you don’t ever specify the \n. */
