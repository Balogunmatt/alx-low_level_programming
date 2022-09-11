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
	int ch;
	int st;

	for (ch = 0; ch < 10; ch++)
		putchar(ch);
	for (st = 'a'; st <= 'f'; st++)
		putchar(st);
	putchar('\n');
	return (0);
}
