#include "main.h"



/**
 * _strncat - concatenate n characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be concatenated
 *
 * Return: @dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int i;

	for (i = 0; i < n; i++)
		dest[len1 + i] =  src[i];
	return (dest);
}
