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

	for (i = 48; i <= 57; i++)
	{	putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
