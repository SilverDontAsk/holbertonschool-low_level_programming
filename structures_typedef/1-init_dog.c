#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable
 * @d: structure
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
d->name = name;
d->age = age;
d->owner = owner;
}
