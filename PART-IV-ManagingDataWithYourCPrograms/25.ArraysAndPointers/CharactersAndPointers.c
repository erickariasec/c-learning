// CHARACTERS AND POINTERS

/*
The following two statements set up almost the same thing in memory. The only difference is that, in the second statement, pName is a
pointer variable, not a pointer constant:

    char name[] = "Andrew B. Mayfair";   // name points to A
    char * pName = "Andrew B. Mayfair";  // pName points to A

Because pName is a pointer variable, you can put it on the left side of an equals sign! Therefore, you don’t always have to
use strcpy() if you want to assign a character pointer a new string value. The character pointer will only point to the first
character in the string. However, %s and all the string functions work with character pointers just as easily as with character
arrays (the two are the same thing) because these functions know to stop at the null zero.

To put a different name in the name array, you have to use strcpy() or assign the string one character at a time—but to make pName
point to a different name, you get to do this:

    pName = "Theodore M. Brooks";
*/


// TIP

/* The only reason string assignment works is that C puts all your program’s string literals into memory somewhere and then replaces
them in your program with their addresses. C is not really putting Theodore M. Brooks into pName because pName can hold only addresses.
C is putting the address of Theodore M. Brooks into pName */



/*
You now have a way to assign strings new values without using strcpy(). It took a little work to get here, but aren’t you glad you
made it? If so, settle down—there’s just one catch (isn’t there always?).
*/
