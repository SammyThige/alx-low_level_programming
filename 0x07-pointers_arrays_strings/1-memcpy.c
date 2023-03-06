#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination block of memory
 * @src: pointer to the source block of memory
 * @n : number of bytes to be copied
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}

