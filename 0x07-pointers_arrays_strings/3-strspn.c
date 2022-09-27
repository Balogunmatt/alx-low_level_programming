#include "main.h"


/**
 * _strspn - returns the span of characters found
 * @s: inputed string
 * @accept: string to check
 *
 * Return: unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;


	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
