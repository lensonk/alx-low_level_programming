#include "dog.h"

/**
 * init_dog-initializes a variable of type struct dog
 * @name: name of the dog
 * @owner: name of the owner
 * @age: age of the dog
 * @d: pointer to the name of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

