// FINDERS, KEEPERS

/*
Think about the following scenario: Your program contains an array that holds customer ID numbers and an array that holds the same number of customer balances. Such arrays are often called parallel arrays because the arrays are in synch—that is, element number 14 in the customer ID array contains the customer number that owes a balance found in element 14 of the balance array.

The customer balance program might fill the two arrays from disk data when the program first starts. As a customer places a new order, it’s your program’s job to find that customer balance and stop the order if the customer owes more than $100 already (the deadbeat!).

In a nutshell, here is the program’s job:

1. Ask for a customer ID number (the key).

2. Search the array for a customer balance that matches the key value.

3. Inform you if the customer already owes more than $100.



The following program does just that.(PART IV, Chapter 22, Book Example 1, Finders and Keepers)
*/
