#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer array
 *
 * Return: 1 and result on success
 */

int main(int argc __attribute__((unused)), int *argv[])
{
	int result;

	result = argv[1] * argv[2];
	if (!argv[1] && !argv[2])
	{
		printf("Error");
		return (1);
	}
	else
		printf("%d\n", result);
}
