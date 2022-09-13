#include "main.h"

/**
 * _islower - checks for lower case letter
 * @c: an ascii character or number
 *
 * Description: This function check for lower case letter
 * Return: 1 and 0 on succes
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
