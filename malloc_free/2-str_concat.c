#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings using malloc.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}

	return (a);
}
