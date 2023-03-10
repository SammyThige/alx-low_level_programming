#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @number: integer stores number to be evalutated
 *
 * Return: returns absolute number
 *
 */

int _abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (number * -1);
}
