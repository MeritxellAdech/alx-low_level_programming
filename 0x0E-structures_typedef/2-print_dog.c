#include "dog.h"

/**
 * print_dog - prints the data of a dog
 *
 * @d: the given dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", ((d->name) != NULL ? d->name : "(nil)"));
		printf("Age: %f\n", (d->age));
		printf("Owner: %s\n", ((d->owner) != NULL ? d->owner : "(nil)"));
	}
}
