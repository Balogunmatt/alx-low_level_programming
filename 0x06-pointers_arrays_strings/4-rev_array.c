#include "main.h"


/**
 * reverse_array - reverses an array
 * @a: the array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, ch;

	for (i = n - 1; i < n/2; i--)
	{
		ch = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = ch;
	}
	for ( i = 0, i <= n - 1; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[n - 1]);
		else
			printf("%d, ", a[i]);
	}
}
