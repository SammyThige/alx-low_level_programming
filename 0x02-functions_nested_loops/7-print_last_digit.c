#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @number: integer stores the number to be evaluated
 *
 * Return: value of the last digit
 *
 */

int print_last_digit(int number)
{
	int n;

	if (number < 0)
		n = -1 * (number % 10);
	else
		n = number % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
