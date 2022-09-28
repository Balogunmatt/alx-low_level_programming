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
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a[i][j]);
		}
	}
	
	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum2 += *(a[i][j]);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
