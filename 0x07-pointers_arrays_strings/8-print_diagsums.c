#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonal
 * @a: input matrix
 * @size: width of column
 *
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int i, j, p, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		sum1 += *(a + p);
	}
	
	for (j = 0; j < size; J++)
	{
		p = (j * size) + (size -1 - j);
		sum2 += *(a + p);
	}
	printf("%d, %d\n", sum1, sum2);
}
