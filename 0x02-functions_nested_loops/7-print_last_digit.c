#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * 
 * Description: this program prints the last digit of a number
 * Return: the last digit on success
 */

int print_last_digit(int c)
{
	int n = c % 10;

	if (c >= 0)
		return (n);
	else
		return (n * -1);
}
