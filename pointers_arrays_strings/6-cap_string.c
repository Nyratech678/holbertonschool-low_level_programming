#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* Capitalize first character if it's a lowercase letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (str);
}
