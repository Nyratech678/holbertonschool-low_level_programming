#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: Pointer to a function that takes a char * as parameter.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
