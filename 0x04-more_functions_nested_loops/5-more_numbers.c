#include "main.h"

/**
 * more_numbers - print number set 10 times
 *
 * Return: no return statement
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
