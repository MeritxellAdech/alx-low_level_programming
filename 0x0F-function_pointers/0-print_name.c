#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the given name
 * @f: a function pointer checks the casing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if ((name == NULL) || (f == NULL))
		return;

	ptr = f;
	ptr(name);
}
