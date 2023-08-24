#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - Returns the sum of all it's parameters
  * @n: The number of parameters passed to the function
  * @...: variable number to be summed
  *
  * Return: 0
  *	Otherwise - sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list dm;
	unsigned int a, sum = 0;

	va_start(dm, n);

	for (a = 0; a < n; a++)
		sum += va_arg(dm, int);

	va_end(dm);

	return(sum);
}
