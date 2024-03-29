#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * based on user request
 *
 * @s: the operator
 * Return: a pointer to the correspondidng function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			break;
		i++;
	}
	return (ops[i].f);
}
