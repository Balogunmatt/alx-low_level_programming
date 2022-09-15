#include "main.h"


/**
 * print_line - print lines
 * @n: number of time _ should be printed
 *
 * Return: no return statement
 */


void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
