#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer array
 *
 * Return: 1 and result on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int result, num1, num2;
	

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
