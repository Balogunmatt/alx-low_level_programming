#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function and putchar
 * function to print a set of alphabets
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
