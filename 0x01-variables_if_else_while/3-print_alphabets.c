#include <stdio.h>

/**
 * main - entry point
 *
 * Description: about using the main function
 * this project is about using the putchar function
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
