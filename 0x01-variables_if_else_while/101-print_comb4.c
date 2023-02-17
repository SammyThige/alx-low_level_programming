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
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if (b != a && c != b)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if ((i + j + k) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
