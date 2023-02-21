#include "main.h"

/**
  * print_alphabet_x10 - defines the prototype in mains.h
  *
  * Description - prints alphabet 10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	int k;
	char letter;

	for (k = 0; k < 10; k++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
