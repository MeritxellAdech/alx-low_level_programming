#include "dog.h"

/**
 * init_dog - initializes the struct dog
 *
 * @d: the variabel to the dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
