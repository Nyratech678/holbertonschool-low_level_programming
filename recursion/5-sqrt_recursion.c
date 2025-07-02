#include "main.h"

int _sqrt(int n, int x);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - Helper function to find square root recursively.
 * @n: Test number (possible square root).
 * @x: Number to find the square root of.
 *
 * Return: The square root of x, or -1 if not found.
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
