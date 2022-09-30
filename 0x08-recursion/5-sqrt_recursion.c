#include "main.h"


/**
 * _sqrt_recursion - finds the square root of a number
 * @n: natural number
 *
 * Return: the integer root
 */

int _sqrt_recursion(int n)
{
	int i;


	for (i = 1; i <= n; i++)
	{
		if (i * i == n)
			return (i);
		else if (i == n && i * i != n)
			return (-1);
		else
			return (_sqrt_recursion(n));
	}
}
