#include "main.h"

int is_prime(int n, int start);

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise returns 0.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n / 2));
}

/**
 * is_prime - Helper function to check if a number is prime.
 * @n: Number to be checked.
 * @start: Number to start checking from.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(int n, int start)
{
	if (start <= 1)
	{
		return (1);
	}
	if (n % start == 0)
	{
		return (0);
	}
	return (is_prime(n, start - 1));
}
