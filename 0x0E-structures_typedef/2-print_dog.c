#include "dog.h"
#include <stdio.h>
/** print_dog - prints information in struct dog
 * @d: Entry of sturct
 * Return - nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		printf("Age: %d\n", d->age);
		if(d->owner != NULL)
			pritf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
