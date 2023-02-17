#include <stdio.h>



/**
  * main - Entry point of the program
  *
  * Description - Executes the program
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar (alph);
		if (alph == 'z')
			putchar('\n');
	}

	return (0);

}
