#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: String to be tested
 *
 * Return: Number of strings
 *
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

