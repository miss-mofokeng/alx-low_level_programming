#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: structure called "dog" that has three members
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
