#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except 'e' and 'q',
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
