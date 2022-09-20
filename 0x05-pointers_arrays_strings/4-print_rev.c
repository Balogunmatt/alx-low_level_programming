#include "main.h"



/**
 * print_rev - print string in reverse
 * @s: string pointer
 *
 * Return: void
 */


void print_rev(char *s)
{
	int h = strlen(s);

	while (h--)
		_putchar(*(s + h));
	_putchar('\n');
}
