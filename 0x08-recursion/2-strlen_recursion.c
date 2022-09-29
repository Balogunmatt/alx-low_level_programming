#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
