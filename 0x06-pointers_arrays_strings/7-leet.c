#include "main.h"




/**
 * leet - encodes special characters
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *)
{
	int i, j;
	
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";


	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}
