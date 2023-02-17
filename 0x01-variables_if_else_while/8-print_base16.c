#include <stdio.h>



/**
  * main - Entry point of the program
  *
  * Description - Executes program
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int d;
	char alph;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
