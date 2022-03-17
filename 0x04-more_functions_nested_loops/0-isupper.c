#include "main.h"
/** 
 * main - checks whether c is uppercase
 * Return 1 if c is uppercase
 * Return 0 if c is lowercase 
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
