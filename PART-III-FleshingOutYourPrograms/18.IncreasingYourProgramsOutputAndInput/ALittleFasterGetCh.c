// A LITTLE FASTER: GETCH()

/*
A character input function named getch() helps eliminate the leftover Enter keypress that getchar() leaves. getch()
is unbuffered—that is, getch() gets whatever keypress the user types immediately and doesn’t wait for an Enter keypress.
The drawback to getch() is that the user can’t press the Backspace key to correct bad input. For example, with getchar(),
a user could press Backspace if he or she typed a B instead of a D. The B would be taken off the buffer by the Backspace,
and the D would be left for getchar() to get after the user pressed Enter. Because getch() does not buffer input, there
is no chance of the user pressing Backspace.

The following code gets two characters without an Enter keypress following each one:

        printf("What are your two initials?\n");
        firstInit = getch();
        lastInit = getch();

getch() is a little faster than getchar() because it doesn’t wait for an Enter keypress before grabbing the user’s
keystrokes and continuing. Therefore, you don’t need a standalone getch() to get rid of the \n as you do with getchar().

getch() does not echo the input characters to the screen as getchar() does. Therefore, you must follow getch() with a
mirror-image putch() if you want the user to see onscreen the character he or she typed.

To echo the initials, you could do this:

        printf("What are your two initials?\n");
        firstInit = getch();

        putch(firstInit);

        lastInit = putch();

        putch(lastInit);


***Don’t use a character I/O function with character variables. Use an int variable instead. */
