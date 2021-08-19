// USING THE DEREFERENCING *

/*
As soon as you link up a pointer to another variable, you can work with the other value by dereferencing the pointer.
Programmers never use an easy word when a hard one will do just as well (and confuse more people).
Dereferencing just means that you use the pointer to get to the other variable.
When you dereference, use the * dereferencing operator.

In a nutshell, here are two ways to change the value of age (assuming that the variables are defined as described earlier):

        age = 25;

and

        *pAge = 25;  // Stores 25 where pAge points

This assignment tells C to store the value 25 at the address pointed to by pAge.
Because pAge points to the memory location holding the variable age, 25 is stored in age.


Notice that you can use a variable name to store a value or dereference a pointer that points to the variable.
You also can use a variable’s value in the same way.

Here are two ways to print the contents of age:

        printf("The age is %d.\n", age);

and

        printf("The age is %d.\n", *pAge);

The true power of pointers comes in the chapters that discuss functions, but getting you used to pointers
still makes sense.
*/
