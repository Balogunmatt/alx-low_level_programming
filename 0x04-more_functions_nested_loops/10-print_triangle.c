#include "main.h"


/**
 * print_triangle - draws a triangle of any size
 * @size: an integer 
 *
 * Return: no return statement
 */


void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - 1; j > 0; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
