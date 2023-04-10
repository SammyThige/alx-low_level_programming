#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int flag = 0;
    int i = 0, j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		flag = n & 1;
		if (flag == 1)
			j = 1;
		if (j == 1)
			_putchar(flag + '0');
		n = n >> 1;
		i++;
	}
}
