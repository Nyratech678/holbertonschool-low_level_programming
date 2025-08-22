#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything, followed by a new line.
 * @format: list of types of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 1;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				j = 1;
				break;
		}
		if (j && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
