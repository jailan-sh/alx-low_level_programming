#include "dog.h"
#include <stdlib.h>
#include <string.h>


/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	/*new_dog->name =  (char *) malloc(strlen(name) + 1);*/
	/*new_dog->owner = (char *) malloc(strlen(owner) + 1);*/

	/**if (new_dog->name == 0 || new_dog->owner == 0)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (0);
	}*/

	/**strcpy(new_dog->name, name);*/
	/**strcpy(new_dog->owner, owner);*/

	new_dog->age = age;
	return (new_dog);
}
