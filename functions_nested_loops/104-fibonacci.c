#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long a_high, a_low, b_high, b_low;
	unsigned long temp_high, temp_low;
	int i;

	printf("%lu, %lu", a, b);

	a_high = a / 1000000000;
	a_low = a % 1000000000;
	b_high = b / 1000000000;
	b_low = b % 1000000000;

	for (i = 2; i < 98; i++)
	{
		temp_high = a_high + b_high;
		temp_low = a_low + b_low;

		if (temp_low >= 1000000000)
		{
			temp_high += 1;
			temp_low -= 1000000000;
		}

		if (temp_high)
		{
			printf(", %lu%09lu", temp_high, temp_low);
		}
		else
		{
			printf(", %lu", temp_low);
		}

		a_high = b_high;
		a_low = b_low;
		b_high = temp_high;
		b_low = temp_low;
	}
	printf("\n");
	return (0);
}
