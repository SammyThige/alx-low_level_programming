#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers for even  terms,
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int number1, number2, sum;
	float total_sum;

	number1 = 0;
	number2 = 1;

	while (1)
	{
		sum = number1 + number2;

		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		number1 = num2;
		number2 = sum;

	}
	printf("%.0f\n", total_sum);

	return (0);
}
