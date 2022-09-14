#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program prints first 50
 * fibonacci number
 * Return: 0 on success and the fibonacci numbers
 */

int main(void)
{
	int n, result;
	int a = 1;
	int b = 2;

	for (n = 1; n <= 50; n++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	printf("%d\n", result);
	return (0);
}
