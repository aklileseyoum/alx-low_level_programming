#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator != NULL)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, char*) == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", va_arg(ap, char*));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end (ap);
}
