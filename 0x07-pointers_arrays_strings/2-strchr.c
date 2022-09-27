#include "main.h"


/**
 * _strchr - a function that returns the first occurence
 * @s: string pointer
 * @c: character to be checked for
 *
 * Return: pointer to the first occurence and NULL if not
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;


	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
