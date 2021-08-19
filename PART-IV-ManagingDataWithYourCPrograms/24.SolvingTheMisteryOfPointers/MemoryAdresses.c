/*
Pointer variables, often called pointers, let you do much more with C than you can with programming languages that don’t
support pointers.
Pointers provide the means for the true power of C programming. This book exposes the tip of the pointer iceberg.
The concepts you learn here will form the foundation of your C programming future.
*/



// MEMORY ADRESSES


/*

Inside your computer is a bunch of memory. The memory holds your program as it executes, and it also holds your program’s
variables. Just as every house has a different address, every memory location has a different address.
Not coincidentally, the memory locations have their own addresses as well. As with house addresses, the memory addresses
are all unique; no two are the same.
Your memory acts a little like one big hardware array, with each address being a different subscript and each memory
location being a different array element.

When you define variables, C finds an unused place in memory and attaches a name to that memory location.
That’s a good thing. Instead of having to remember that an order number is stored at memory address 34532, you only
have to remember the name orderNum (assuming that you named the variable orderNum when you defined the variable).
The name orderNum is much easier to remember than a number.

*/
