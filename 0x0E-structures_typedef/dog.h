#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct that stores information about a dog.
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
