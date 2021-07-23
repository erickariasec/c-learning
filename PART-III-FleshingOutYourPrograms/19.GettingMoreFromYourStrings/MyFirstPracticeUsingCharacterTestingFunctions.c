/* Create a program in which user has to register to access to the platform.
Password needs minimum: 1 uppercase letter, 1 lower case, and 1 number. */

#include <stdio.h>  // for: printf() and scanf()
#include <string.h>  // for: strlen()
#include <ctype.h> // for: isalpha() , isdigit() , isupper() , islower()

main()
{
    // SET UP VARIANBLES
    int testChar;
    int hasUpper, hasLower, hasDigit;
    char email[30], userName[25], password[25];

    printf("\n\n\t\t\t\t\t\tWelcome to Feisbuk\n\n");

    printf("Please register to continue:\n\n");

    printf("Email: ");
    scanf(" %s", email);

    printf("\nUser Name: ");
    scanf(" %s", userName);

    printf("\nPassword: ");
    scanf(" %s", password);

    for (testChar = 0; testChar < strlen(password); testChar++)
    {
        if (isdigit(password[testChar]))
        {
            hasDigit = 1;
            continue;
        }
        if (isupper(password[testChar]))
        {
            hasUpper = 1;
            continue;
        }
        if(islower(password[testChar]))
        {
            hasLower = 1;
        }
    }

    if ((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\nSuccessful registration %s\n\n\a", userName);
        printf("Enjoy using Feisbuk!\n\n");
    }
    else
    {
        printf("\n\nSorry, you could not register!\n\n\a");
        printf("Your password needs minimum a lowercase letter, an uppercase letter and a number!\n\n");
        printf("Return later to try again.\n");
        printf("SEE YOU!\n\n");
    }














    /*for (i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
        else if (isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        else if (islower(password[i]))
        {
            hasLower = 1;
        }
    }

    if ((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\nSuccessful Registration %s!\n\n\a", userName);
        printf("It\'s time to enjoy time at Feisbuk!\n\n");
    }

    else
    {
        printf("\n\nSorry %s, your password needs minimum: a lowercase letter, an upper letter and a number.\n\n\a", userName);
    }*/
    return 0;
}
