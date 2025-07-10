#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: Prints the name, age, and owner of the dog.
 * If an element is NULL, prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
