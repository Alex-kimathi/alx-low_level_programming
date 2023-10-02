### 0x0B. C - malloc, free

#### Objectives
1. What is the difference between automatic and dynamic allocation
2. What is malloc and free and how to use them
3. Why and when use malloc
4. How to use valgrind to check for memory leak

#### Tasks
1. Write a function that creates an array of chars, and initializes it with a specific char.
Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails
