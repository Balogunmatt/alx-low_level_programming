#include "main.h"




/**
 * puts_half - prints the last half of the string
 * @str: a string pointer
 * 
 * Return: void
 */


void puts_half(char *str)
{
	int l = strlen(str);
	int h = l / 2;
	int n = (l - 1) / 2;
	int r = n - 1;
	int j = h - 1;

	if (l % 2 != 0)
	{
		while (*(str + r) != '\0')
		{
			_putchar(*(str + r));
			r++;
		}
	}
	else
	{
		while (*(str + j) != '\0')
		{
			_putchar(*(str + j));
			j++;
		}
	}
	_putchar('\n');
}
