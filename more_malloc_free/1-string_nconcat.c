#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: The first string (destination).
 * @s2: The second string (source).
 * @n: The maximum number of bytes to use from s2.
 *
 * Return: Pointer to a newly allocated space in memory containing s1,
 *         followed by the first n bytes of s2, and null-terminated.
 *         Returns NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
