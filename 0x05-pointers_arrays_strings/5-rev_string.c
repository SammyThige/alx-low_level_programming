#include "main.h"

/**
 * rev_string - reverses string order
 *
 * @s: pointer to a string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char word;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		word = s[i];
		s[i++] = s[len];
		s[len] = word;
	}
}

