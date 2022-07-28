### C - More Malloc

Delving more into malloc in this directory. I explore `exit`, `realloc` and `calloc`. 

~ `exit()` - This function will terminate the process that calls the exit
~ `realloc()` - Used to dynamically change the memory allocation of a previously allocated memory.
~ `calloc()` - Used to dynamically allocate the specified number of blocks of memory of the specified type.

Food For Thought

![Thoughts] (https://imgs.search.brave.com/OlxZq7W-LA3t2nvId0wdMCmHIADZ0A1GitQoqruXpxY/rs:fit:905:225:1/g:ce/aHR0cHM6Ly90c2Uy/Lm1tLmJpbmcubmV0/L3RoP2lkPU9JUC5n/OVM4OVFRRDRvNFdF/RC1aRVdHTm5RSGFE/NCZwaWQ9QXBp)

| Function Prototype | Description |
| --------- | ---------- |
| `void *malloc_checked(unsigned int b);` | Function that allocates memory using `malloc` |
| `char *string_nconcat(char *s1, char *s2, unsigned int n);` | Function taht concatenates two strings |
| `void *_calloc(unsigned int nmemb, unsigned int size);` | Function that allocates memory for an array using `malloc` |
| `int *array_range(int min, int max);` | Function that creates an array of integers |
| `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` | Function that reallocates a memory block using `malloc` and `free` |
