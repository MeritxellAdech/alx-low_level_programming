#include "dog.h"

/**
 * free_dog - free memory used by dog
 *
 * @d: a pointer to the dog variable
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
