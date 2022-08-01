### C- Structures, typedef
----------
In this directory, we explore structures in C which are user defined data types that allows to combine items of different kinds. 

It follows the following synytax when being declared:
			
			struct User
			{
				char *name;
				char *email;
				int age;
			};
Since its contents are stored in the contiguous memory, the `sizeof` operator must be used to get the number of bytes needed to store a particular type of `struct`

`typedef` is used to give a type a new name.

-----------
Directory meme 😂

![C meme](https://imgs.search.brave.com/pSufUIxXhyly2dhh1e44CeE6QyrOjPVirmCw6lfnNaw/rs:fit:359:225:1/g:ce/aHR0cHM6Ly90c2Uy/Lm1tLmJpbmcubmV0/L3RoP2lkPU9JUC5Y/LUczREJ6OHoyX2lB/dmxOWTFvZmt3QUFB/QSZwaWQ9QXBp)

The table below contains descriptions of functions and function prototypes regarding usage of struct and typedef.

| Files | Description |
| -------- | -------- |
| `dog.h` | Defines a new type `struct dog` |
| `void init_dog(struct dog *d, char *name, float age, char *owner);` | Function that initialize a variable of type `struct dog` |
| `void print_dog(struct dog *d);` | Function that prints a `struct dog` |
| `dog_t *new_dog(char *name, float age, char *owner);` | Function that creates a new "dog" |
| `void free_dog(dog_t *d);` | Function that frees dogs |

#### #cisfun
