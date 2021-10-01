/*
The heap is the collection of unused memory in your computer.

The memory left over—after your program, your program’s variables, and your operating system’s workspace—comprises your computer’s
available heap space, as Figure 26.1 shows.

Figure 26.1: https://learning.oreilly.com/api/v2/epubs/urn:orm:book:9780133149869/files/graphics/26fig01.jpg

Many times you’ll want access to the heap, because your program will need more memory than you initially defined in variables and arrays.
This chapter gives you some insight into why and how you want to use heap memory instead of variables.

You don’t assign variable names to heap memory. The only way to access data stored in heap memory is through pointer variables.
*/



// NOTE:
/* The free heap memory is called free heap or unallocated heap memory. The part of the heap in use by your program at any one time is
called the allocated heap. Your program might use varying amounts of heap space as the program executes. So far, no program in this
book has used the heap. */




// THINKING OF THE HEAP

/*
The heap is—the unused section of contiguous memory.
THROW OUT WHAT YOU´VE LEARNED!
You’ll more quickly grasp how to use the heap if you think of the heap as just one big heap of free memory stacked up in a pile.

You’ll be allocating (using) and deallocating (freeing back up) heap memory as your program runs. When you request heap memory, you don’t
know exactly from where on the heap the new memory will come. Therefore, if one statement in your program grabs heap memory, and then the
very next statement also grabs another section of heap memory, that second section of the heap might not physically reside right after the
first section you allocated.

Just as when scooping dirt from a big heap, one shovel does not pick up dirt granules that were right below the last shovel of dirt.
Also, when you throw the shovel of dirt back onto the heap, that dirt doesn’t go right back where it was. Although this analogy might
seem to stretch the concept of computer memory, you’ll find that you’ll understand the heap much better if you think of the heap of
memory like you think of the heap of dirt: You have no idea exactly where the memory you allocate and deallocate will come from or go
back to. You know only that the memory comes and goes from the heap.   //       PERFECT EXPLANATION!!!!!!!!

If you allocate 10 bytes of heap memory at once, those 10 bytes will be contiguous. The important thing to know is that the next section
of heap memory you allocate will not necessarily follow the first, so you shouldn’t count on anything like that.

Your operating system uses heap memory along with your program. If you work on a networked computer or use a multitasking operating
environment such as Windows, other tasks might be grabbing heap memory along with your program. Therefore, another routine might have
come between two of your heap-allocation statements and allocated or deallocated memory.

You have to keep track of the memory you allocate. You do this with pointer variables. For instance, if you want to allocate 20 integers
on the heap, you use an integer pointer. If you want to allocate 400 floating-point values on the heap, you use a floating-point pointer.
The pointer always points to the first heap value of the section you just allocated. Therefore, a single pointer points to the start of
the section of heap you allocate. If you want to access the memory after the first value on the heap, you can use pointer notation or
array notation to get to the rest of the heap section you allocated. (See, the last chapter’s pointer/array discussion really does come
in handy!)
*/
