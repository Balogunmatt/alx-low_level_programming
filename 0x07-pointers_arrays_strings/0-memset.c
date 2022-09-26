#include "main.h"



/**
 * _memset - fills the memory with a constant character
 * @s: string pointer
 * @b: constant character
 * @n: array size
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
