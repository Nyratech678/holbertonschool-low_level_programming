#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times to print '_'
 *
 * Return: returns nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
