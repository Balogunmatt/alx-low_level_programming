#include "main.h"

/**
 * print_alphabet - printing alphabet in lower case
 *
 * Description: This function prints all alphabets in lower case
 * Return: 0 on success
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
