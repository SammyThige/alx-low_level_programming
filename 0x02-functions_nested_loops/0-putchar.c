#include <stdio.h>
/**
  * main - entry point of the program
  *
  * Description - outputs putchar then a new line
  *
  * Return: 0 for successs
  */
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

