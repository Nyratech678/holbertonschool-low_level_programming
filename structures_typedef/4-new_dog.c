#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);

	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src == NULL || dest == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new struct dog_t (Success), NULL (Failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
