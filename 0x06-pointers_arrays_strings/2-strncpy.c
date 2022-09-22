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
	char temp;

	for (i = 0; i < n; i++)
		temp = src[i];
	dest = temp;
	return (dest);
}
