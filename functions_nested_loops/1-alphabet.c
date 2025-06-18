#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
