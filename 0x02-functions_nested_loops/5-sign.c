#include "main.h"

/**
 * print_sign - prints the sign of an input
 * @n: an integer
 *
 * Description: this function prints the sign of an integer
 * Return: -1, 0, and 1 on success
 */

int print_sign(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
