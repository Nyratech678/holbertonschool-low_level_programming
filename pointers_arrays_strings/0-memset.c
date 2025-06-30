#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b
 * @s: pointer to the memory area to fill
 * @b: constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    while (n)
    {
        s[n - 1] = b;
        n--;
    }
    return (s);
}