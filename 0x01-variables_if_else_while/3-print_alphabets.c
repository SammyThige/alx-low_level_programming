#include <stdio.h>



/**
  * main - Entry point of the program
  *
  * Description -prints the alphabet in lowercase, and then in uppercase
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char small, big;

	for (small = 'a'; small <= 'z'; small++)
	{
		putchar (small);
		if (small == 'z')
		{
			for (big = 'A'; big <= 'Z'; big++)
			{
				putchar(big);
			}
		putchar('\n');
		}
	}
	return (0);
}
