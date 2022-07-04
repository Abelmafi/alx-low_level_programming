#ifndef DOG_H
#define DOG_H

/**
 * struct dog - list doges
 * @name: list name
 * @age: age
 * @owner: oner name.
 *
 * Description: personal info detail
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
