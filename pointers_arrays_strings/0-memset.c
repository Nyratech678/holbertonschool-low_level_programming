#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: Pointer to the memory area to fill.
 * @b: Constant byte to fill with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
