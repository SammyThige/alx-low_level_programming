#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1, num2, k, sum;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld, ", num1, num2);
	for (k = 0; k < 48; k++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%ld", sum);
		if (k != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
