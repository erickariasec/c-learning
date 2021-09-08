// GETTING DOWN IN THE LIST

/*
Because an array name is nothing more than a pointer to the first value in the array, if you want the second value, you only have to
add 1 to the array name and dereference that location.

This set of printf() lines:

        printf("The first array value is %d.\n", vals[0]);
        printf("The second array value is %d.\n", vals[1]);
        printf("The third array value is %d.\n", vals[2]);
        printf("The fourth array value is %d.\n", vals[3]);
        printf("The fifth array value is %d.\n", vals[4]);

does exactly the same as this set:

printf("The first array value is %d.\n", *(vals + 0));
printf("The second array value is %d.\n", *(vals +1));
printf("The third array value is %d.\n", *(vals + 2));
printf("The fourth array value is %d.\n", *(vals + 3));
printf("The fifth array value is %d.\n", *(vals + 4));

If vals is a pointer constant (and it is), and the pointer constant holds a number that is the address to the array’s first element,
adding 1 or 2 (or whatever) to vals before dereferencing vals adds 1 or 2 to the address vals points to.
*/


// TIP

/* If you’re wondering about the importance of all this mess, hang tight. In a moment, you’ll see how C’s pointer notation lets you
make C act almost as if it has string variables. */



/*
As you might remember, integers usually take more than 1 byte of memory storage. The preceding printf() statements appear to add 1 to
the address inside vals to get to the next dereferenced memory location, but C helps you out here. C adds one int size when you
add 1 to an int pointer (and one double size when you add 1 to a double pointer, and so on). The expression *(vals + 2) tells C that
you want the third integer in the list that vals points to.
*/




