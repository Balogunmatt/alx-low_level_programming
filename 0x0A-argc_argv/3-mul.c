#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer array
 *
 * Return: 1 and result on success
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	

	if (arg != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
