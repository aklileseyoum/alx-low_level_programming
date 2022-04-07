#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns pointer which memory is allocated
 * @b - unsigned integer which is the size of the memory in bytes
 * Return - void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = (void *)malloc(b);

	return (p);
}
