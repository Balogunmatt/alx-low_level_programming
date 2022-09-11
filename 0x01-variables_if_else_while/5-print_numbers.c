#include <stdio.h>

/**
 * main - entry point
 *
 * Description: about using the main function
 * to write out digits from 0 to 9
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
