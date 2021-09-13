// BE CAREFUL WITH LENGTHS

/*
It’s okay to store string literals in character arrays as just described. The new strings that you assign with = can be shorter or longer
than the previous strings. That’s nice because you might recall that you can’t store a string in a character array that is longer than the
array you reserved initially.

You must be extremely careful, however, not to let the program store strings longer than the first string you point to with the character
pointer. This is a little complex, but keep following along—because this chapter stays as simple and short as possible.

Never set up a character pointer variable like this:

        main()
        {
        char * name = "Tom Roberts";
        // Rest of program follows...

and then later let the user enter a new string with gets() like this:

        gets(name); // Not very safe

The problem with this statement is that the user might enter a string longer than Tom Roberts, the first string assigned to the character
pointer. Although a character pointer can point to strings of any length, the gets() function, along with scanf(), strcpy(), and strcat(),
doesn’t know that it’s being sent a character pointer. Because these functions might be sent a character array that can’t change location,
they map the newly created string directly over the location of the string in name. If a string longer than name is entered, other
data areas could be overwritten.
*/


/*
If you want to have the advantage of a character pointer—that is, if you want to be able to assign string literals to the pointer and still
have the safety of arrays so you can use the character pointer to get user input—you can do so with a little trick.

If you want to store user input in a string pointed to by a pointer, first reserve enough storage for that input string.

The easiest way to do this is to reserve a character array and then assign a character pointer to the beginning element of that array:

        char input[81]; // Holds a string as long as 80 characters
        char *iptr = input; // Also could have done char *iptr = &input[0]

Now you can input a string by using the pointer as long as the string entered by the user is not longer than 81 bytes long:

        gets(iptr);  // Makes sure that iptr points to the string typed by the user

You can use a nice string-input function to ensure that entered strings don’t get longer than 81 characters, including the null zero.
Use fgets() if you want to limit the number of characters accepted from the user.
fgets() works like gets(), except that you specify a length argument.

The following statement shows fgets() in action:

        fgets(iptr, 81, stdin);  // Gets up to 80 chars and adds null zero


        fgets(string,size,stdin);

        // In this example, string is the name of a char array, a string variable; size is the amount of text to input plus one, which
        // should be the same size as the char array; and stdin is the name of the standard input device, as defined in the stdio.h header
        // file.   (Internet explanation)

The second value is the maximum number of characters you want to save from the user’s input. Always leave one for the string’s null zero.
The pointer iptr can point to a string as long as 81 characters. If the user enters a string less than 81 characters, iptr points to that
string with no problem. However, if the user goes wild and enters a string 200 characters long, iptr points only to the first 80, followed
by a null zero at the 81st position that fgets() added, and the rest of the user’s input is ignored.
*/


// TIP
/* You can use fgets() to read strings from data files. The third value of fgets() can be a disk file pointer, but you’ll learn about
disk pointers later in the book. For now, use stdin as the third value you send to fgets() so that fgets() goes to the keyboard for input
and not somewhere else. */


/*
You also can assign the pointer string literals using the assignment like this:

iptr = "Mary Jayne Norman";
*/


