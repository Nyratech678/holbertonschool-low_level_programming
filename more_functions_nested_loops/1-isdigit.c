#include "main.h"

/**
 * _isdigit - function that verifies if a character is a digit or not
 * @c: tested character
 * Return: returns 1 if it is a digit, 0 if not
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
