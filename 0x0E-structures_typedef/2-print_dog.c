#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * dog *d : struct pointer to dog
 * @d : pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("%s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	}
	else
		return;
}