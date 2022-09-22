#include "main.h"

/**
 * _strncpy - copies n number of characters
 * @dest: destination
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: @dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
