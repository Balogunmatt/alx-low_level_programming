#include <stdio.h>

/**
 * main- entry point
 *
 * Description: About using the main function
 * and the putchar function to print alphabets
 * in reverse order
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
