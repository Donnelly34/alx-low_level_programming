#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of the two integers */

{

	int temp = *a;
	*a = *b;
	*b = temp;

}
