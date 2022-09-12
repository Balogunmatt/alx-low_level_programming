#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function to
 * print hexadecimal numbers in lowercase
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
