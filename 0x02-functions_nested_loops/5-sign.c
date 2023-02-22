#include "main.h"

/**
 * print_sign - prints +, 0, - when n is 
 * greater than, less than, or equals 0
 *
 * Return (0) Always.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}	
