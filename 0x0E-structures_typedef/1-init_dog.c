#include "main.h"
#include "dog.h"

/**
 * init_dog - intialize the members of dog structure
 * @d: pointer to dog
 * @name: array of characters for dog name
 * @age: float variable for dog age
 * @owner: array of character for dog owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}