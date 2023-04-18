#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else 
		{
			printf("%s\n", d->name);
		}
		  if (d->age == 0)
                {
                        printf("Age: (nil)");
                }
                else
                {
                        printf("%f\n", d->age);
                }
                  if (d->owner == NULL)
                {
                        printf("Owner: (nil)");
                }
                else
                {
                        printf("%s\n", d->owner);
                }
	}
}
