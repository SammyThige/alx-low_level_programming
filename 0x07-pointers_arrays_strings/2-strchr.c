#include "main.h"

/**
 * _strchr - function locates a character in a string
 *
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

