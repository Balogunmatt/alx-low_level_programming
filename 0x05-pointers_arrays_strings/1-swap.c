#include "main.h"


/**
 * void swap_int(int *a, int *b) - swaps the value of two variable
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */


void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
