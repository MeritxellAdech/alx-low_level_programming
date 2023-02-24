#include "main.h"

/**
 *main - prints prime factor numbers
 * Return: 0 success
 */
int main(void)
{
	long int number = 612852475143;
	long int largest_prime = number;
	long int track_factor = 2;

	while (track_factor < largest_prime)
	{
		if (largest_prime % track_factor == 0)
		{
			largest_prime /= track_factor;
		}
		else
		{
			track_factor++;
		}
	}
	printf("%li\n", largest_prime);
	return (0);
}
