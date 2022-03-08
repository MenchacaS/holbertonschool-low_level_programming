#ifndef _HDOG_
#define _HDOG_

/**
  * struct dog - Dog
  * @name: name
  * @age: age
  * @owner: owner
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
