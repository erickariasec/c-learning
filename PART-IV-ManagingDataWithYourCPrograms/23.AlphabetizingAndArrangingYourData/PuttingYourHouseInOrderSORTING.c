/*
Sorting is the computer term given to ordering lists of values.
Not only must you be able to find data in arrays, but you often need to arrange array data in a certain order.
Computers are perfect for sorting and alphabetizing data, and arrays provide the vehicles for holding sorted data.

Students don’t enroll based on alphabetical last name, even though most colleges print lists of students that way.
Therefore, after collecting student data, the school’s computer programs must somehow arrange that data in last
name order for reports.

Bubble sort.
*/


// PUTTING YOUR HOUSE IN ORDER: SORTING

/*
If you want to alphabetize a list of letters or names, or put a list of sales values into ascending order (ascending
means from low to high, and descending means from high to low), you should use a sorting routine.
Of course, the list of values that you sort will be stored in an array because array values are so easily rearranged
by their subscripts.

Computer methods.
bubble sort.
The bubble sort isn’t extremely efficient compared to other sorts, but it’s the easiest to understand.
During a sort, the lower values “float” up the list each time a pass is made through the data.

PROCESS OF SORTING 5 NUMBERS USING BUBBLE SORT:

    Before sorting:         50
                            32
                            93
                            2
                            74

    During the first pass, C compares the first value to the second. Because 32 is less than 50, they switch places:
                            32
                            50
                            93
                            2
                            74

    It then compares 32 and 93 and leaves them where they are. Next, C compares 32 and 2. Because 2 is the lesses
    value, 32 and 2 switch places:
                            2
                            50
                            93
                            32
                            74

    Finally it compares 2, the new first value in the list, to 74 and leaves them.

    After first pass:       2
                            50
                            93
                            32
                            74

    During second pass, C compares the second value, 50, to 93 and leaves them. It then compares 50 to 32 and
    switches them:          2
                            32
                            93
                            50
                            74

    C then compares the second value, 32 to 74 and leaves them.

    After second pass:      2
                            32
                            93
                            50
                            74

    This process continues until all the numbers have been sorted.

    After thirds pass:      2
                            32
                            50
                            93
                            74

    After fourth pass:      2
                            32
                            50
                            74
                            93  (sorted)

    During each pass, the lower values “float” to the top of the array.
