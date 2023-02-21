#include <stdio.h>

/**
 *  _isalpha - checks whether a character is an alphabet
 *
 *  @c: store the character to check whether it is an alphabet
 *
 *  Return:     1 if c is a letter
 *
 */

int _isalpha(int c)
{
	char lowerchar, upperchar;
	int letter = 0;

	for (lowerchar = 'a'; lowerchar <= 'z'; lowerchar++)
	{
		for (upperchar = 'A'; upperchar <= 'Z'; upperchar++)
		{
			if (c == lowerchar || c == upperchar)
				letter = 1;
		}
	}
	return (letter);
}
