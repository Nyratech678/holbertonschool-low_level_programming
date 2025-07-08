#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory block to be allocated.
 *
 * Return: Pointer to the allocated memory.
 *         Exits with status 98 if allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);

	return (block);
}
