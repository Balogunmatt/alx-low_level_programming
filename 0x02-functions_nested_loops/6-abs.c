#include "main.h"

/**
 * _abs - prints out the absolute value
 * @c: an integer
 *
 * Return: c or c * -1 on success
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
