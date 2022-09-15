#include "main.h"

/**
 * _isupper - checks if a character is in upper case
 * @c: character to be inputted
 *
 * Return: 1 or 0 on success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
