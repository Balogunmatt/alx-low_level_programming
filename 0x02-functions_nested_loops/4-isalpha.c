#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 * @c: an ascii character or number
 *
 * Description: this function checks for an alphabetic character
 * Return: 0 and 1 on success
 */


int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
