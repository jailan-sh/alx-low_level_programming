#ifndef _DOG_h_
#define _DOG_h_

/**
 * struct dog -  ID for a pet
 * @name : name
 * @age : age
 * @owner : name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
