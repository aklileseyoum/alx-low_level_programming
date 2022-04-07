#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *p = (void *)malloc(b);

	return (p);
}
