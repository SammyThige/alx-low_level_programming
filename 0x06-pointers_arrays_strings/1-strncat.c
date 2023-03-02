#include "main.h"

/**
	* _strncat - concatenates similar to _strcat but
	* it will use at most n bytes from src
	*
	* @dest: variable to receive string input
	* @src: variable that stores source string
	* @n: number of bytes
	*
	* Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);

}

