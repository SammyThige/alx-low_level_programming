#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - entry point for the program
 *
 * Description - Random number checker
 * @i: parameter
 *
 * Return: 0 (success)
*/

void positive_or_negative(int n)
{


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

}

