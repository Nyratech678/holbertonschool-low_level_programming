#include "main.h"
/**
 * _strncpy - Copies a string, including the terminating null byte,
 *            using at most an inputted number of bytes.
 *            If the length of src is less than n, the remainder of dest
 *            is filled with null bytes.
 *            Works identically to the standard library function `_strncpy`.
 * @dest: Buffer storing the string copy
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
