#include "dog.h"

/**
 * _strdup - duplicates the given string
 * then return a copy
 *
 * @value: the string to duplicate
 *
 * Return: a copy of the given string
 */
char *_strdup(char *value)
{
	char *str = NULL;
	int index = 0;

	while (value[index])
	{
		index++;
	}

	str = malloc((sizeof(char) * index) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;

	while (value[index])
	{
		str[index] = value[index];
		index++;
	}
	str[index] = '\0';

	return (str);
}

/**
 * new_dog - creates a new dog
 *
 * @name: the name of the new dog
 * @age: the age othe same
 * @owner: the name of the dog owner
 * Return: a pointer to the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy = NULL;

	poppy = malloc(sizeof(dog_t));
	if (poppy != NULL)
	{
		poppy->name = _strdup(name);
		if (poppy->name == NULL)
		{
			free(poppy);
			return (NULL);
		}
		poppy->age = age;
		poppy->owner = _strdup(owner);
		if (poppy->owner == NULL)
		{
			free(poppy->name);
			free(poppy);
			return (NULL);
		}
		return (poppy);
	}
	return (NULL);
}
