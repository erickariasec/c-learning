/* C’s array and pointer variables share a lot of principles.
An array is a special kind of pointer. Because of their similarities, you can use pointer notation to get to array values, and you can use
array notation to get to pointed-at values.

Perhaps the most important reason to learn how arrays and pointers overlap is for character string handling. By combining pointer
notation (using the dereferencing operation) and array notation (using subscripts), you can store lists of character strings and
reference them as easily as you reference array values of other data types.

Also, after you master the heap—a special place in memory that the next chapter introduces you to—you’ll see that pointers are the only
way to get to heap memory, where you put data values. */



// ARRAY NAMES ARE POINTERS

/*
An array name is nothing more than a pointer to the first element in that array. The array name is not exactly a pointer variable, though.
Array names are known as pointer constants.

The following statement defines an integer array and initializes it:

        int vals[5] = {10, 20, 30, 40, 50};

You can reference the array by subscript notation. That much you know already. However, C does more than just attach subscripts to the
values in memory. C sets up a pointer to the array and names that point to vals.
You can never change the contents of vals; it is like a fixed pointer variable whose address C locks in.

Figure 25.1 shows you what C really does when you define and initialize vals.
https://learning.oreilly.com/api/v2/epubs/urn:orm:book:9780133149869/files/graphics/25fig01.jpg
The array name is a pointer to the first value in the array.

Because the array name is a pointer (that can’t be changed), you can print the first value in the array like this:

        printf("The first value is %d.\n", vals[0]);

But more important for this chapter, you can print the first array value like this, too:

        printf("The first value is %d.\n", *vals);

As you’ll see in a moment, this is also equivalent and accesses vals[0]:

        printf("The first value is %d.\n", *(vals+0));

*/


/*
WARNING:
The fact that an array is a fixed constant pointer is why you can’t put just an array name on the left side of an equals sign.
You can’t change a constant. (Remember, though, that C relaxes this rule only when you first define the array because C has yet to fix
the array at a specific address.)
*/
