#include "main.h"



/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 *
 * Return: @dest
 */


char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = 0;
	len2 = 0;

	len1 = strlen(dest);
	len2 = strlen(src);
	
	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];
	_putchar('\n');
	
	return (dest);
}
