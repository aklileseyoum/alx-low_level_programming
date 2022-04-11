#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		if (d->age != NULL)
			printf("Age: %d\n", d->age);
		else
			printf("Age: (nil)");
		if(d->owner != NULL)
			pritf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
