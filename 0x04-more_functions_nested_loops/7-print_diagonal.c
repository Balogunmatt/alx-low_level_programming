#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times \ is printed
 *
 * Return: no return statement
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar(92);
	}
	_putchar('\n');
}
