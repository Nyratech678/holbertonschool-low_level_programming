#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence
 *           of the character c in the string s, or NULL if the
 *           character is not found
 * @s: string targeted
 * @c: character targeted
 *
 * Return: pointer to first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return (s + i);
    }
    if (c == '\0')
        return (s + i);
    return (NULL);
}