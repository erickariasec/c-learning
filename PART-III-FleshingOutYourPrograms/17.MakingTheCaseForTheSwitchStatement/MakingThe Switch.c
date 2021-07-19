// USER INTERFACE: When you create menus to ask for user input.




/* The if statement is great for simple testing of data, especially if your data tests have only two or three
possibilities. You can use if to test for more than two values, but if you do, you have to nest several if
statements inside one another, and that can get confusing and hard to maintain.

Consider for a moment how you execute code based on a user’s response to a menu. A menu is a list of options from
which to select, such as this one:

        What do you want to do?
        1. Add New Contact
        2. Edit Existing Contact
        3. Call Contact
        4. Text Contact
        5. Delete Contact
        6. Quit the Program
        What is your choice?

It would take five if-else statements, nested inside one another, to handle all these conditions, as you can see here:

        if (userAns == 1)
               {
                      // Perform the Add Contact Routine
               }
        else if (userAns == 2)
               {
                     //Perform the Edit Contact Routine
               }
        else if (userAns == 3)
               {
                     //Perform the Call Contact Routine
               }
        else if (userAns == 4)
               {
                     //Perform the Text Contact Routine
               }
        else if (userAns == 5)
               {
                     //Perform the Delete Contact Routine
               }
        else
               {
                     //Perform the Quit Routine
               }


Nothing is wrong with nested if statements, but the C switch statement is clearer for multiple conditions. */




// MAKING SWITCH

/* The switch statement has one of the longest formats of any statement in C (or just about any other language).
Here is the format of switch:


        switch (expression)
        {
               case (expression1): { one or more C statements; }
               case (expression2): { one or more C statements; }
               case (expression3): { one or more C statements; }
        // This would keep going for however many case statements to test
               default: { one or more C statements; }


The menu shown earlier is perfect for a series of function calls.

A function call would replace the printf() statements you see after each case. */
