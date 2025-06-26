#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: String to be appended upon
 * @src: String to be completed at end of dest
 * @n: Number of bytes from src to use
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, dest_len;

	index = 0;
	dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[index] != '\0' && index < n)
	{
		dest[dest_len] = src[index];
		dest_len++;
		index++;
	}
	dest[dest_len] = '\0';

	return (dest);
}
