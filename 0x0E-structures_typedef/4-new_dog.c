#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * contains a copy of the string given as a parameter.
  * @str: input array
  * Return: pointer to array
  */
char *_strdup(char *str)
{
	char *p;
	int i, size = 0;

	if (!str)
		return (0);
	while (str[size] != '\0')
	{
	size++;
	}
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
	return (p);
	for (i = 0; i < size; i++)
	{
	p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}

/**
* new_dog - check the code for Holberton School students.
* @name: name's dog
* @age: age's dog
* @owner: owner's dog
* Return: new dog pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new1;

	new1 = malloc(sizeof(dog_t));
	if (new1 == NULL)
	return (NULL);
	new1->name = _strdup(name);
	if (new1->name == 0)
	free(new1);
	new1->age = age;
	new1->owner = _strdup(owner);
	if (new1->owner == 0)
	{
		if (new1->name != 0)
		free(new1->name);
		free(new1);
	}
return (new1);
}
