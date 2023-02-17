#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Description - prints out numbers in a specified order
  *
  * Return: 0 (success)
  */

int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
