#ifndef DOG_H
#define DOG_H
/*
 * struct dog - data of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: this structure represents information about a dog
 */
typedef struct dog
{
char *name; /* name of dog */
float age; /* age of dog */
char *owner; /* address of dog owner */
} dog;
int _putchar(char c);
#endif /* DOG_H */
