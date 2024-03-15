#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * struct dog_t - Represents information about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: this structure represents info about a dog,
 * including its age, name, and owner.
 */
typedef struct dog
{
char *name; /* name of dog */
float age; /* age of dog */
char *owner; /* address of dog owner */
} dog;
typedef struct dog_t
{
char *name; /*name of dog */
float age; /*age of dog */
char *owner; /* adress of dog owner */
} dog_t
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
