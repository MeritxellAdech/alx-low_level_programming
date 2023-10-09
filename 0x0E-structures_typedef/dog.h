#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - is a struct defined for dog
 * @name: the dog name
 * @age: the age of the dog
 * @owner: the name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - is defined type for the presvious struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
