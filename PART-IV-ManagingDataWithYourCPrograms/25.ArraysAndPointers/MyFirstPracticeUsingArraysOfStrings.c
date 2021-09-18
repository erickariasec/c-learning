// MY FIRST PRACTICE USINGS ARRAYS OF STRINGS

// CELLPHONE BRANDS SURVEY

#include <stdio.h>

main()
{
    // SET UP VARIABLES
    char name[40];
    char *phoneBrand[7]={"Samsung", "Motorola", "Apple", "Realme", "Xiaomi", "Huawei", "LG"};

    int brandRating[7];

    int i;
    int ctr=0;
    char shortAnswer;

    char *tempPhoneBrand="Here I can put whatever I want, it is only for initialize this pointer variable";
    int tempBrandRating, outer, inner, didSwap;


    printf("\n\n\t\t\t\t\t\tCELLPHONE BRANDS SURVEY\n");
    printf("\t\t\t\t\t\t-----------------------\n\n");

    printf("What is your name?\n");
    gets(name); // When you print this name, you will see complete name

    printf("\nHi %s, you were selected to answer this survey!\n\n", name);

    for (i=0; i<7; i++)
    {
        printf("\nHave you ever use a %s phone? (Y/N)\n", phoneBrand[i]);
        scanf(" %c", &shortAnswer);
        if ((toupper(shortAnswer)) == 'Y')
        {
            printf("How would you rate this brand from 1 to 10?\n");
            scanf(" %d", &brandRating[i]);
            ctr++; // This will be used to print only cellphone brands you've used
            continue;
        }
        else
        {
            brandRating[i] = -1; // If you haven´t use a phone brand, it will be ignored
        }
    }



    // SORTING PHONE BRANDS DEPENDING ON HOW YOU RATE THEM

    for (outer=0; outer<6; outer++)
    {
        didSwap=0;
        for (inner=outer; inner<7; inner++)
        {
            if(brandRating[inner] > brandRating[outer])
            {
                tempPhoneBrand=phoneBrand[inner];
                tempBrandRating=brandRating[inner];
                phoneBrand[inner]=phoneBrand[outer];
                brandRating[inner]=brandRating[outer];
                phoneBrand[outer]=tempPhoneBrand;
                brandRating[outer]=tempBrandRating;
                didSwap=1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    printf("\n\n***HERE IS AN ORDERED LIST OF YOUR FAVORITE BRANDS***\n\n");

    for (i=0; i<ctr; i++) // This loop will take all cellphone brands that were selected with ctr in the first for loop.
    {
        printf(" %s you rate %d\n", phoneBrand[i], brandRating[i]);
    }

    return 0;
}
