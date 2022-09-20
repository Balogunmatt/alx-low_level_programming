#include "main.h"




/**
 * rev_string - reverses string
 * @s: string pointer
 *
 * Return:void
 */


void rev_string(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
		_putchar(i);
	_putchar('\n');
}
