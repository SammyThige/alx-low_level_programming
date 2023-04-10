#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b:  A pointer to binary string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		base = base << 1;
		if (b[i] == '1')
			base = base ^ 1;
		i++;
	}
	return (base);

}
