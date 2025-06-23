#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: returns 0
 */
int main(void)
{
	long number = 612852475143;
	long inc = 2;

	while (inc <= number / 2)
	{
		if (number % inc == 0)
		{
			number /= inc;
			inc = 2;
			continue;
		}
		inc++;
	}

	printf("%ld\n", number);
	return (0);
}
