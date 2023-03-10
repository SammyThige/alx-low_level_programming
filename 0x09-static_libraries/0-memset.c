#include "main.h"

/**
 * _memset -  function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer to the variable
 * @b: the variable to be writtem
 * @n: the he number of bytes to be written
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}

