#include "main.h"
/**
 * main - returns integer
 *
 * Description - returns 0 if c is lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}