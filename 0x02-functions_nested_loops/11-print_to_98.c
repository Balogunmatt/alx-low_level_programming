#include <stdio.h>

/**
 * print_to_98 - print from n up to 98
 * @n: is any given integer
 *
 * Return: void no return statement
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
