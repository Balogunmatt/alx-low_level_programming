#include "main.h"


/**
 * _strpbrk - returns the pointer to the first match
 * @s: input string pointer
 * @accept: set of character string for check
 *
 * Return: pointer to the first match or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;


	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
