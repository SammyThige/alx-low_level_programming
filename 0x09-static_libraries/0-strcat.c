# include "main.h"


/**
  * _strcat - Concatenates two strings
  *
  * @dest: variable to receive string input
  * @src: variable that stores source string
  *
  * Return: *dest
  */

char *_strcat(char *dest, char *src)
{
	char *str3 = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (str3);
}

