/* MAKE A PROGRAM WHERE USER CAN ENTRY THEIR INITIALS AND USER´S COUPLE INITIALS.
FOR USER USE GETCHAR() AND PUTCHAR()
FOR COUPLE INITIALS USE GETCH() AND PUTCH()*/


#include <stdio.h>

main()
{
    int user, couple;
    char userFirstNameInitial[1];
    char userLastNameInitial[1];
    char coupleFirstNameInitial[1];
    char coupleLastNameInitial[1];

    printf("Which are your first name and last name initials? (Press enter for each initial)\n");
    userFirstNameInitial[user] = getchar();
    getchar();
    userLastNameInitial[user] = getchar();
    getchar();

    printf("\nHere are your initials: \a");
    putchar(userFirstNameInitial[user]);
    putchar(userLastNameInitial[user]);


    printf("\n\n\nWhich are the name and last name initials of your couple? (DON\'T PRESS ENTER for each initial, It will do automatically) (Put initials together WITHOUT SPACES)\n");
    coupleFirstNameInitial[couple] = getch();
    coupleLastNameInitial[couple] = getch();

    printf("\nHere are your couple\'s initials: \a");
    putch(coupleFirstNameInitial[couple]);
    putch(coupleLastNameInitial[couple]);
    return 0;
}
