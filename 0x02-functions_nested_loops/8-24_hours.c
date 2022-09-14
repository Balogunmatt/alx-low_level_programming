#include "main.h"

/**
 * jack_bauer - prints the time taken
 *
 * Return: 0 on success
 */

void jack_bauer(void)
{
	int h = 0;
	int min = 0;
	int hr;
	int mr;

	while (h <= 23)
	{
		while (min <= 59)
		{
			hr = h % 10;
			mr = min % 10;
			_putchar(h / 10 + '0');
			_putchar(hr + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(mr + '0');
			min++;
			_putchar('\n');
		}
		h++;
		min = 0;
	}
}
