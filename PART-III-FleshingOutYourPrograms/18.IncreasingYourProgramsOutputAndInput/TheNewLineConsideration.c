// THE NEWLINE CONSIDERATION

/*
Although getchar() gets a single character, control isn’t returned to your program until the user presses Enter.
The getchar() function actually instructs C to accept input into a buffer, which is a memory area reserved for input.
The buffer isn’t released until the user presses Enter, and then the buffer’s contents are released a character at
a time. This means two things. One, the user can press the Backspace key to correct bad character input, as long as
he or she hasn’t pressed Enter. Two, the Enter keypress is left on the input buffer if you don’t get rid of it.

*Getting rid of the Enter keypress is a problem that all beginning C programmers must face. Several solutions exist,
but none is extremely elegant.

Consider the following segment of a program:

        printf("What are your two initials?\n");
        firstInit = getchar();
        lastInit = getchar();

You would think that if the user typed GT, the G would go in the variable firstInit and the T would go in lastInit,
but that’s not what happens. The first getchar() doesn’t finish until the user presses Enter because the G was going
to the buffer. Only when the user presses Enter does the G leave the buffer and go to the program—but then the Enter
is still on the buffer! Therefore, the second getchar() sends that Enter (actually, the \n that represents Enter) to
lastInit. The T is still left for a subsequent getchar() (if there is one).

*One way to fix this problem is to insert an extra getchar() that captures the Enter but doesn’t do anything with it.

Here is a workaround for the initial-getting problem:

        printf("What are your two initials?\n");
        firstInit = getchar();
        n1 = getchar();
        lastInit = getchar();
        n1 = getchar();

This code requires that the user press Enter between each initial. You don’t have to do anything with the nl variable
because nl exists only to hold the in-between newline. You don’t even have to save the newline keypress in a variable.

The following code works just like the last:

        printf("What are your two initials?\n");
        firstInit = getchar();
        getchar(); // Discards the newline
        lastInit = getchar();
        getchar(); // Discards the newline

Some C compilers issue warning messages when you compile programs with a standalone getchar() on lines by themselves.
As long as you use these getchar()s for discarding Enter keypresses, you can ignore the compiler warnings.

You also can request the two initials by requiring the Enter keypress after the user enters the two initials, like this:

        printf("What are your two initials?\n");
        firstInit = getchar();
        lastInit = getchar();
        getchar();

If the user types GP and then presses Enter, the G resides in the firstInit variable and the P resides in the
lastInit variable.
