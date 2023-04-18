#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the dog
 * @d: pointer to dog structure
 *
 * Return: pointer to freed memory location
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
