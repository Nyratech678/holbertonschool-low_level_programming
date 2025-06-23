#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: returns 0
 */
int main(void)
{
	int num = 0;

	while (num < 100)
	{
		num++;

		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
