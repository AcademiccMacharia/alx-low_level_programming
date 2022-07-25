### C - Malloc,Free
-----
In this directory, I look at the `malloc` function as well as the `free` function. 

Normally, when you declare variables the program is taking care of memory allocation this is `automatic allocation`. Dynamic allocation is when the memory is assigned manually. Can be done through:
				malloc
				realloc
				calloc
	
Malloc is used to allocate memory during the execution of a program while free is used to deallocate memory when its not need anymore.

In big complex programs its probable to miss freeing all the memory, `Valgrind` can be used to ensure all allocated memory is freed.

Directory meme 😂

![Malloc Meme](https://i.redd.it/bom1vpkzw7y11.jpg)

The table below has several function prototypes as well as their description.

--------

| Function Prototype | Description |
| ------------- | ---------- |
| `char *create_array(unsigned int size, char c);` | Function that creates an array of chars, initialized with a specific char |
| `char *_strdup(char *str);` | Returns a pointer to a newly allocated space in memory |
| `char *str_concat(char *s1, char *s2);` | Function that concatenates two strings |
| `int **alloc_grid(int width, int height);` | Returns a pointer to a 2 dimensional array of integers |
| `void free_grid(int **grid, int height);` |  Frees a 2 dimensional grid previously created by your alloc_grid function |
| `char *argstostr(int ac, char **av);` | Concantenats all the arguments of your program |
| `char **strtow(char *str);` | Splits a string into words |

#cisfun
