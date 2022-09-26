#include "main.h"


/**
 * _memcpy - a function that copies memory
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 *
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
