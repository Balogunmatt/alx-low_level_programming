#include "main.h"




/**
 * rev_string - reverses string
 * @s: string pointer
 *
 * Return:void
 */


void rev_string(char *s)
{
	int r = strlen(s) - 1;

	while (*(s + r) != '\0')
	{
		_putchar(*(s + r));
		r--;
	}
	*s = *(s + r);
	_putchar('\n');
}
