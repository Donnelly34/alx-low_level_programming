#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int r, arr = 0;
	unsigned long int original;

	for (r = 63; r >= 0; r--)
	{
		original = n >> r;

		if (original & 1)
		{
			_putchar('1');
			arr++;
		}
		else if (arr)
			_putchar('0');
	}
	if (!arr)
		_putchar('0');
}

