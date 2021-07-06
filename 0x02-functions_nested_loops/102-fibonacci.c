#include <stdio.h>

/**
 * main - check the code for Holberton School students
 *
 * Return: void.
 */
int main(void)
{
	int i;
	unsigned long int a, b, c;

	a = 0;
	b = 1;

	for (i = 1; i < 51; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%li", c);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
