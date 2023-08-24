#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *cat;
	int h, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	cat = malloc(sizeof(int) * size);

	if (cat == NULL)
		return (NULL);

	for (h = 0; min <= max; h++)
		cat[h] = min++;

	return (cat);
}

