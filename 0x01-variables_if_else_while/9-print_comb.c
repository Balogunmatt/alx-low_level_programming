#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{	putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
