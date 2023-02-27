#include "main.h"

/**
 * print_array - outputs elements of an array
 *
 * @a: pointer to an array of integers
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}

