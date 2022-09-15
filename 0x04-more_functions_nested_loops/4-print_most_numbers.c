#include "main.h"

/**
 * print_most_numbers - print with 2 and 4
 *
 * Return: no return statement
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar(10);
}
