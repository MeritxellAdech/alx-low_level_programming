#include "variadic_functions.h"


/**
 * print_int - print integers
 *
 * @n: the number
 */
void print_int(int n)
{
	printf("%d", n);
}

/**
 * print_char - prints charcters
 *
 * @c: the given character
 */
void print_char(char c)
{
		putchar(c);
}

/**
 * print_float - prints decimal numbers
 *
 * @f: the decimal number
 */
void print_float(float f)
{
	printf("%f", f);
}

/**
 * print_str - prints string
 *
 * @s: the given string
 */
void print_str(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}


/**
 * print_all - prints all arguments passed given it
 *
 * @format: is the argument type
 */
void print_all(const char * const format, ...)
{
	int i = 0, index = 0;
	float f = 0.0;
	char *s;
	char c;
	va_list vf;

	va_start(vf, format);
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				c = va_arg(vf, int);
				print_char(c);
				break;
			case 'i':
				i = va_arg(vf, int);
				print_int(i);
				break;
			case 'f':
				f = va_arg(vf, double);
				print_float(f);
				break;
			case 's':
				s = va_arg(vf, char *);
				print_str(s);
				break;
			default:
				index++;
				continue;
				break;
		}
		if (format[index + 1])
			printf(", ");

		index++;
	}
	printf("\n");
}
