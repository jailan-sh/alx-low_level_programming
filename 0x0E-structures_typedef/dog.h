#ifndef _DOG_h_
#define _DOG_h_

/**
 * struct dog -  ID for a pet
 * @name : name
 * @age : age
 * @owner : name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
