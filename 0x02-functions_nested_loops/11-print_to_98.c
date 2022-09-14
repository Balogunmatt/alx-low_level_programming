#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print from n up to 98
 * @n: is any given integer
 *
 * Return: void no return statement
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}
