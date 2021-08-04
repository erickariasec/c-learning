// PUTTING VALUES IN ARRAYS

/*
You don’t always know the contents of an array at the time you define it. Often array values come from a disk file,
calculations, or a user’s input. Character arrays are easy to fill with strings because C supplies the strcpy() function.
You can fill other types of arrays a single element at a time. No shortcut function, such as strcpy(), exists to put
a lot of integers or floating-point values in an array.

The following code defines an array of integers and asks the user for values that are stored in that array.
Unlike regular variables that all have different names, array elements are easy to work with because you can use
a loop to count the subscripts, as done here:

        int ages[3];
        for (i = 0; i < 3; i++)
        {
               printf("What is the age of child #%d? ", i+1);
               scanf(" %d", &ages[i]); // Gets next age from user
        }
*/
