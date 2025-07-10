#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog data
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Defines metadata about a dog and its owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
