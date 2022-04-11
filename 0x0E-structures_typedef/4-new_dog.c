#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return - the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p->name = name;
	p->age = age;
	p->owner = owner;
	if (p == NULL)
		return (NULL);

	return (p);
}
