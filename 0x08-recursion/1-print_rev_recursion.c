#include "main.h"

/**
 *  _print_rev_recursion - prints a given string in reverse
 *
 *  @s: is the given string
 *  Return: nothing
 */
void  _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
