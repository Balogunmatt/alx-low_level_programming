#include "main.h"

/**
 * _isdigit - checks if an input is a digit
 * @c: an inputted character
 *
 * Return: 1 or 0 on success
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
