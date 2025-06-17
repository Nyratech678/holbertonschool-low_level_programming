#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules, suivi d'un saut de ligne.
 *
 * Return: Always 0 (Succès)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
