#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return ('\0');
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}

