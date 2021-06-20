/* We are going to practice all Escape Sequences */

#include <stdio.h>

main()
{
    printf("After writing this line I am going to add new line.\n"); //         \n      Newline
    printf("Hello everybody, it is alarm\a"); //                                \a      Alarm (the computer´s bell)
    printf(", for that reason here is a combination of new line and alarm\a!\n");
    printf("This is an example of backspace\b and this part\n"); //             \b      Backspace
    printf("Look at TAB function\t It is really simple to use\t Ok\n"); //      \t      Tab
    printf("Here is an example of backslash ---> 1\\204 number\n"); //          \\      Backslash
    printf("I\'m adding quotation mark here\n"); //                             \´      Single Quote Mark
    printf("And finally it is \"C\" double quotation mark\n\n\n\n"); //         \"      Double Quote Mark


/* Different forms of Escape Sequences */

    printf("This is the first line\nAnd this is the second line");// Adding NEW LINE in the same line

    return 0;
}
