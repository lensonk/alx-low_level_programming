#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
/**
 * struct dog-information
 * @name: name of the dog
 * @owner: name of the owner
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner,);

#endif
