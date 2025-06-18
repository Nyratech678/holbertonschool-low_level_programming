#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of the times table to print (must be between 0 and 15)
 *
 * Description: Prints the times table up to n. Each number is right-aligned
 * in a field of 3 spaces. If n is out of range, the function does nothing.
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
				printf("%d", product);
			}
			else
			{
				printf(", %3d", product);
			}
		}
		printf("\n");
	}
}
