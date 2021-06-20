/* Common Types of Variables */

/*


    Name            Description
   -----------------------------------------------------------------------------------
    char            Holds character data such as 'x' and '^'

    int             Holds integer data such as 1, -32, and 435125. Stores data
                    between -2, 147, 483, 648 and 2, 147, 483, 647

    float           Holds floating-point data such as 25.6, -145.23, and .000005

    double          Holds extremely large or extremely small floating-point values
   -----------------------------------------------------------------------------------


*/

#include <stdio.h>

/* DEFINING VARIABLES */

main()
{
       // My variables for the program
       char answer;
       int quantity;
       float price;

/* Rest of program would follow */







/* You can define more than one variable of the same data type on the same line */

main()
{
       // My variables for the program

       char first_initial;
       char middle_initial;

/* Rest of program would follow. */






// or like this:

main()
{
       // My variables for the program

       char first_initial, middle_initial;

/* Rest of program would follow. */




//  ---------------------------------------------------------------------------------------------------




/* STORING DATA IN VARIABLES */


        // The assignment operator is simply the equals sign (=)

        variable = data;

        answer = 'B';
        quantity = 14;
        price = 7.95;



        // You also can store answers to expressions in variables:

        price = 8.50 * .65;  // Gets price after 35% discount



        // You can even use other variables in the expression:

        totalAmount = price * quantity;  /* Uses value from another variable */




