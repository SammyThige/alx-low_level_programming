#include "main.h"

/**
  * _strlen - returns the length of a string
  *
  * @s: character that stores the string
  *
  * Return: integer the number of characters in a string
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

