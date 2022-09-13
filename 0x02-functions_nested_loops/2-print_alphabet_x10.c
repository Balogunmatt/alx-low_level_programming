#include "main.h"


/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: This function prints alphabets 10 times
 * Return: 0 on success
 */


void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';
		
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
