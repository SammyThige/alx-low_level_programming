#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @string: string to encode
 *
 * Return: character
 */

char *leet(char *string)
{
	int i = 0;

	while (string[i] != 0)
	{
		if (string[i] == 'a' || string[i] == 'A')
			string[i] = '4';
		else if (string[i] == 'e' || string[i] == 'E')
			string[i] = '3';
		else if (string[i] == 'o' || string[i] == 'O')
			string[i] = '0';
		else if (string[i] == 't' || string[i] == 'T')
			string[i] = '7';
		else if (string[i] == 'l' || string[i] == 'L')
			string[i] = '1';
		i++;
	}
	return (string);
}

