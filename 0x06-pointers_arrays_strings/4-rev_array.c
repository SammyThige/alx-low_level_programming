#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers.
  *
  * @a: pointer for integer array
  * @n: number of elements of the array
  *
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i;
	int *temp = malloc(n * sizeof(int));
	int j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		temp[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}

