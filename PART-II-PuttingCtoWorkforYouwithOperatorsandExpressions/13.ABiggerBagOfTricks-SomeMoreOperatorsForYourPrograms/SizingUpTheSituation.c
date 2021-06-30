// SIZING UP THE SITUATION

/* You use sizeof() to find the number of memory locations it takes to store values of any data type. Although
most C compilers now use 4 bytes to store integers, not all do. To find out for sure exactly how much memory
integers and floating points are using, you can use sizeof().

The following statements do just that:

        i = sizeof(int); // Puts the size of integers into i.
        f = sizeof(float); // Puts the size of floats into f

sizeof() works on variables as well as data types. If you need to know how much memory variables and arrays take,
you can apply the sizeof() operator to them.

The following section of code shows you how:

        char name[] = "Ruth Claire";
        int i = 7;
        printf("The size of i is %d.\n", sizeof(i));
        printf("The size of name is %d.\n", sizeof(name));

Here is one possible output from this code:

        The size of i is 4
        The size of name is 12

*/

/* The length of a string and the size of a string are two different values. The length is the number of bytes up
to but not including the null zero, and it is found via strlen(). The size of a string is the number of characters
it takes to hold the string, including the null zero. */

// Although sizeof() might seem worthless right now, you’ll see how it comes in handy as you progress in C

