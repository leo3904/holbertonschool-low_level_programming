
#include "holberton.h"

/**
 * print_triangle - function with int type argument
 * @size: int type 1st argument
 *
 * Description: nested loops to print triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = j - i; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
