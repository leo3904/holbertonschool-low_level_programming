#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: The number passed in to check if it's lowercase
 *
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
