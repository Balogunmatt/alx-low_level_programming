#include "main.h"



/**
 * _strstr - returns the substring of a string
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the substring
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;


	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
}
