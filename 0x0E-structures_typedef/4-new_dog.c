#include "dog.h"
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);

	return (p);
}
