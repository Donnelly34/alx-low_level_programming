
#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, arr = 0;
	unsigned long int original;
	unsigned long int main = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		original = main >> r;
		if (original & 1)
			arr++;
	}

	return (arr);
}

