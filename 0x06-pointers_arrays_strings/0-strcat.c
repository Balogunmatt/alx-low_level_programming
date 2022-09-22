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
	int len1, i;

	len1 = 0;
	len1 = strlen(dest);
	
	for (i = 0; src[i]; i++)
		dest[len1++] = src[i];
	
	return (dest);
}
