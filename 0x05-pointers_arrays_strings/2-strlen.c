#include "main.h"


/**
 * _strlen - gives the length of string
 * @s: a pointer to the first character of the string
 *
 * Return: len on success
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
