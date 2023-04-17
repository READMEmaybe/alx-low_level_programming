#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: the variable
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
