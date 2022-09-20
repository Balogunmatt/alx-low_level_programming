#include "main.h"


/**
 * _puts - print a string literal
 * @str: string pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	int r = 0;

	while (*(str + r) != '\0')
	{
		_putchar(*(str + r));
		r++;
	}
	_putchar('\n');
}
