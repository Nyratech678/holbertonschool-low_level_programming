#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: Prints numbers separated by a comma and a space,
 * starting from n and ending at 98, followed by a new line.
 */
void print_to_98(int n)
{
	int current;

	if (n <= 98)
	{
		for (current = n; current <= 98; current++)
		{
			printf("%d", current);
			if (current != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (current = n; current >= 98; current--)
		{
			printf("%d", current);
			if (current != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
