#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure t
 * @name: an array of characters to hold the name of a dog
 * @age: an integer variable to hold age
 * @owner: an array of characters
 * Return: Nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
