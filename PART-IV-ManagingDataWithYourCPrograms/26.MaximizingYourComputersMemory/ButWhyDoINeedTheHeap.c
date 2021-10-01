// BUT WHY DO I NEED THE HEAP?

/*
The heap memory does not always replace the variables and arrays you’ve been learning about. The problem with the variables you’ve learned
about so far is that you must know in advance exactly what kind and how many variables you will want. Remember, you must define all variables
before you use them. If you define an array to hold 100 customer IDs, but the user has 101 customers to enter, your program can’t just
expand the array at runtime. Some programmers (like you) have to change the array definition and recompile the program before the array
can hold more values.

With the heap memory, however, you don’t have to know in advance how much memory you need. Similar to an accordion, the heap memory your
program uses can grow or shrink as needed. If you need another 100 elements to hold a new batch of customers, your program can allocate
that new batch at runtime without needing another compilation.
*/



// WARNING:
/* This book doesn’t try to fool you into thinking that this chapter can answer all your questions. Mastering the heap takes practice—and,
in reality, programs that really need the heap are beyond the scope of this book. Nevertheless, when you finish this chapter, you’ll have
a more solid understanding of how to access the heap than you would get from most books because of the approach that’s used. */



/*
Commercial programs such as spreadsheets and word processors must rely heavily on the heap. After all, the programmer who designs the
program cannot know exactly how large or small a spreadsheet or word processing document will be. Therefore, as you type data into a
spreadsheet or word processor, the underlying program allocates more data. The program likely does not allocate the data 1 byte at a time
as you type because memory allocation is not always extremely efficient when done 1 byte at a time. More than likely, the program allocates
memory in chunks of code, such as 100-byte or 500-byte sections.

So why can’t the programmers simply allocate huge arrays that can hold a huge spreadsheet or document instead of messing with the heap?
For one thing, memory is one of the most precious resources in your computer. As we move into networked and windowed environments, memory
becomes even more precious. Your programs can’t allocate huge arrays for those rare occasions when a user might need that much memory.
Your program would solely use all that memory, and other tasks could not access that allocated memory.
*/



// NOTE:
/* The heap enables your program to use only as much memory as it needs. When your user needs more memory (for instance, to enter more
data), your program can allocate the memory. When your user is finished using that much memory (such as clearing a document to start a
new one in a word processor), you can deallocate the memory, making it available for other tasks that might need it.*/
