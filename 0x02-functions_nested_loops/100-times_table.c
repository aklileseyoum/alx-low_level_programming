#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
    	{
        	int i, j, r;
        	for (i = 0; i <= n; i++)
        	{
            		for (j = 0; j < n; j++)
            		{
                		r = (i * j);
                		_putchar(i * j + '0');
                		if (r < 10)
				{
                    			_putchar('.');
					_putchar('.');
					_putchar('.');
				}
                		else if (r < 100)
				{
                    			_putchar('.');
					_putchar('.');
				}
                		else if (r < 1000)
                    			_putchar('.');
            		}
            		_putchar(i * n + '0');
            		_putchar('\n');
        	}
    	}
}
