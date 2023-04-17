#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of
 * type struct dog
 * @name: pet name
 * @age: pet age
 * @owner: owner
 * @d : pointer to struct
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

