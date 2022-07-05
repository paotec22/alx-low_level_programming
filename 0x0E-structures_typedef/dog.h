#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -stores info of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 *  Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Defining a new type dog_t as a new name for the type struct dog.
 */

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif

