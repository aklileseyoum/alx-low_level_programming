#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putschar('\n');
	else
		_putchar(*s);
	s++;
	_puts_recursion(s);
}
