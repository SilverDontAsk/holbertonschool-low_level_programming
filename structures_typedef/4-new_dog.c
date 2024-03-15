#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 * _strlen - returns length of string
 * @s: string to measure
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;
	while (s[len])
		len++;
	return (len);
}
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of dog
 * Return: Null if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nlen, olen, i;
	dog_t *new_dog;
	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	nlen = _strlen(name);
	olen = _strlen(owner);
	new_dog->name = malloc(nlen + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(olen + 1);
	if(new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= nlen; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (i = 0; i <= olen; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}

