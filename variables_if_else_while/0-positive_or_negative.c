#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to n and prints its sign
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	{
printf("%d is positive\n", n);
	}
else if (n == 0)
	{
printf("%d is zero\n", n);
	}
else
	{
printf("%d is negative\n", n);
	}

return (0);
}
