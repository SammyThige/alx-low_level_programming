#include "main.h"

/**
 * print_numbers - prints 0 - 9 and a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
