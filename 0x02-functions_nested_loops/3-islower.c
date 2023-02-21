#include <stdio.h>

/**
  * _islower - checks if a character is lowercase
  *
  * @c: checks the input of the function and is of type character
  *
  * Return: 1 if c is lowercase
  *         0 otherwise
  */

int _islower(int c)
{
	char i;
	int lowerchar = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lowerchar = 1;
	}

	return (lowerchar);
}
