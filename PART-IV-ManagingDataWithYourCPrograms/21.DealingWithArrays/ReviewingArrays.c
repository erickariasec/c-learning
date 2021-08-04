// REVIEWING ARRAYS

/*
All arrays contain values called elements.
An array can contain only elements that are of the same type.
You can’t have an array that has a floating-point value, a character value, and an integer value.

You define arrays almost the same way you define regular non-array variables. To define a regular variable, you only
have to specify its data type next to the variable name:

        int i;    // Defines a non-array variable

To define an array, you must add brackets ([]) after the name and specify the maximum number of elements you will ever
store in the array:

        int i[25];  // Defines the array

If you want to initialize a character array with an initial string, you know that you can do this:

        char name[6] = "Italy";  // Leave room for the null!

WARNING:
After you define an array to a certain size, don’t try to store more elements than were allowed in the original size.
After defining name as just done, the strcpy() function lets you store a string longer than Italy in name, but the
result would be disastrous because other data in memory could be overwritten unintentionally. If another variable
happened to be defined immediately after name, that other variable’s data will be overwritten if you try to store a
too-long string in name.

If the initial array needs to be larger than the initial value you assign, specify a larger array size when you
define the array, like this:

        char name[80] = "Italy";  // Leaves lots of extra room

Make your arrays big enough to hold enough values, but don’t overdo it.
Don’t make your arrays larger than you think you’ll really need.
Arrays can consume a large amount of memory, and the more elements you reserve, the less memory you have for your
program and other variables.

You can initialize an array one element at a time when you define an array by enclosing the array’s data elements
in braces and following the array name with an equals sign. For example, the following statement both defines an
integer array and initializes it with five values:

        int vals[5] = {10, 40, 70, 90, 120};

The numbers in brackets indicate subscripts.
No null zero is at the end of the array because null zeroes terminate only strings stored in character arrays.

        THE VALS ARRAY
              10        vals[0]
              40        vals[1]
              70        vals[2]
              90        vals[3]
             120        vals[4]

The first subscript of all C arrays begins at 0.

The following statement defines and initializes two arrays, a floating-point array and a double floating-point array.
Because C is free-form, you can continue the initialization list over more than one line, as is done for annualSal.

        float money[10] = {6.23, 2.45, 8.01, 2.97, 6.41};
        double annualSal[6] = {43565.78, 75674.23, 90001.34,
                              10923.45, 39845.82};

You also can define and initialize a character array with individual characters:

        char grades[5] = {'A', 'B', 'C', 'D', 'F'};

Because a null zero is not in the last character element, grades consists of individual characters, but not a string.
If the last elements were initialized with '\0', which represents the null zero, you could have treated grades as a
string and printed it with puts(), or printf() and the %s conversion code. The following name definition puts a
string in name:

        char italCity[7] = {'V', 'e', 'r', 'o', 'n', 'a', '\0'};

You have to admit that initializing such a character array with a string is easier to do like this:

        char italCity[7] = "Verona";   // Automatic null zero

We should be getting back to numeric arrays, which are the primary focus of this chapter. Is there a null zero at
the end of the following array named nums?

        int nums[4] = {5, 1, 3, 0};

There is not a null zero at the end of nums!
Be careful—nums is not a character array, and a string is not being stored there.
The zero at the end of the array is a regular numeric zero.
The bit pattern (that’s fancy computer lingo for the internal representation of data) is exactly like that of a null zero.
But you would never treat nums as if there were a string in nums because nums is defined as an integer numeric array.

WARNING:
Always specify the number of subscripts when you define an array.
This rule has one exception, however: If you assign an initial value or set of values to the array at the time
you define the array, you can leave the brackets empty:

        int ages[5] = {5, 27, 65, 40, 92};   // Correct

        int ages[];  // Incorrect

        int ages[] = {5, 27, 65, 40, 92};   // Correct

NOTE:
sizeof() returns the number of bytes you reserved for the array, not the number of elements in which you have stored
a value.
For example, if floating-point values consume 4 bytes on your computer, an 8-element floating-point array will take
a total of 32 bytes of memory, and 32 is the value returned if you apply sizeof() to the array after you define
the array.

If you want to zero out every element of an array, you can do so with a shortcut that C provides:

        float amount[100] = {0.0};  // Zeroes-out all of the array

If you don’t initialize an array, C won’t either.
Until you put values into an array, you have no idea exactly what’s in the array.
The only exception to this rule is that most C compilers zero out all elements of an array if you initialize at least
one of the array’s values when you define the array. The previous clue works because one value was stored in amount’s
first element’s position and C filled in the rest with zeroes. (Even if the first elements were initialized with
123.45, C would have filled the remaining elements with zeroes.)
*/
