// DEFINING POINTER VARIABLES

/*
As with any other type of variable, you must define a pointer variable before you can use it.
Before going further, you need to learn two new operators:

       ----------------------------------------
        OPERATOR    |   DESCRIPTION
       ----------------------------------------
         &          |   Address of the operator
         *          |   Dereferencing operator
       ----------------------------------------

You’ve seen the * before. How does C know the difference between multiplication and dereferencing? The context of how
you use them determines how C interprets them. You’ve also seen the & before scanf() variables. The & in scanf() is the
address-of operator. scanf() requires that you send it the address of non-array variables.

The following shows how you would define an integer and a floating-point variable:

        int num;
        float value;

To define an integer pointer variable and a floating-point pointer variable, you simply insert an *:

        int * pNum;  // Defines two pointer variables
        float * pValue;
*/


/*
NOTE:
There’s nothing special about the names of pointer variables. Many C programmers like to preface pointer variable names
with a p, as done here, but you can name them anything you like. The p simply reminds you they are pointer variables, not
regular variables.
*/


/*
Pointer variables hold addresses of other variables. That’s their primary purpose. Use the address-of operator, &, to
assign the address of one variable to a pointer. Until you assign an address of a variable to a pointer, the pointer
is uninitialized and you can’t use it for anything.


The following code defines an integer variable named age and stores 19 in age.
Then a pointer named pAge is defined and initialized to point to age.
The address-of operator reads just like it sounds.
The second line that follows tells C to put the address of age into pAge.

        int age = 19;       // Stores a 19 in age
        int * pAge = &age; // Links up the pointer

You have no idea exactly what address C will store age at. However, whatever address C uses, pAge will hold that address.
When a pointer variable holds the address of another variable, it essentially points to that variable.
Assuming that age is stored at the address 18826 (only C knows exactly where it is stored), Figure 24.1 shows what
the resulting memory looks like.

FIG. 24:  https://learning.oreilly.com/api/v2/epubs/urn:orm:book:9780133149869/files/graphics/24fig01.jpg
*/


/*
WARNING: Just because you define two variables back to back doesn’t mean that C stores them back to back in memory.
C might store them together, but it also might not.

WARNING: Never try to set the address of one type of variable to a pointer variable of a different type.
C lets you assign the address of one type of variable only to a pointer defined with the same data type.
*/


/*
The * isn’t part of a pointer variable’s name. You use the * dereferencing operator for several things, but in the
pointer definition, the * exists only to tell C that the variable is a pointer, not a regular variable.
The following four statements do exactly the same thing as the previous two statements. Notice that you don’t use * to
store the address of a variable in a pointer variable unless you are also defining the pointer at the same time.

        int age; // Defines a regular integer
        int * pAge; // Defines a pointer to an integer
        age = 19; //Stores 19 in age
        pAge = &age; // Links up the pointer
