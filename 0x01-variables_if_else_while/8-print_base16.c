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
	int st;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (st = 'a'; st <= 'f'; st++)
		putchar(st);
	putchar('\n');
	return (0);
}
