#include "main.h"


/**
 * swap_int - swaps the value of two variable
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */


void swap_int(int *a, int *b)
{
	int r = *a;

	*a = *b;
	*b = r;
}
