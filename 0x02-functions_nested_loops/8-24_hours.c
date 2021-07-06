#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar(48);
				_putchar(h + '0');
				_putchar(58);
			}
			else
			{
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
				_putchar(58);
			}
			if (m < 10)
			{
				_putchar(48);
				_putchar(m + '0');
				_putchar(10);
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				_putchar(10);
			}
		}
	}
}
