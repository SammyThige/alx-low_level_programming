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
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');

	return (0);
}
