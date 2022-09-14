#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program prints the sum of all multiples
 * of 3 and 5
 * Return: 0 on success
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
