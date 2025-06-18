#include "main.h"

/**
 * print_number - prints an integer using only putchar
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of the times table to print
 *
 * Description: Only uses putchar to print.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
			{
				print_number(product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				/* Print spaces for alignment */
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (product < 100)
				{
					_putchar(' ');
				}
				print_number(product);
			}
		}
		_putchar('\n');
	}
}
