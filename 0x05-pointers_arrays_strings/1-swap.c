#include "main.h"

/**
  * swap_int - swap two numbers
  *
  * @a: first integer
  * @b: second integer
  *
  * Return: Always 0
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

