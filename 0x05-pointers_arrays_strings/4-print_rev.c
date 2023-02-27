#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}

