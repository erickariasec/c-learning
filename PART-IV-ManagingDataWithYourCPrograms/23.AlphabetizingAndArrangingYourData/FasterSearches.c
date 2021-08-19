// FASTER SEARCHES

/* Sorting data speeds your data searching. */

/*
Consider the following list of unsorted customer IDs:

        313
        532
        178
        902
        422
        562

Suppose the program had to look for the customer ID 413. With an unsorted array, a program would have to match the
ID 413 to each element in the array.

If the arrays contained hundreds or thousands of values instead of only six, the computer would take longer to realize
unmatched searches because each search would require that each element be looked at. However, if the values were always
sorted, a program would not always have to scan through the entire list before realizing that a match would not be found.

Here is the same list of values sorted numerically, from low to high customer IDs:

        178
        313
        422
        532
        562
        902

A sorted list makes the search faster.

Now if you search for customer ID 413, your program can stop searching after looking at only three array values. 422 is
the third element, and because 422 is greater than 413, your program can stop searching. It can stop searching because
422 comes after 413.
*/


/*
NOTE:
In extreme cases, searching a sorted array is not necessarily faster than sorting using an unsorted array. For instance,
if you were searching within the previous list for customer ID 998, your program would have to search all six values
before realizing that 998 was not in the list.
*/
