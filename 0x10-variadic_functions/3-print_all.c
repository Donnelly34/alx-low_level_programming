#include "variadic_functions.h"
	#include <stdarg.h>
	#include <stdio.h>


	/**
	 * print_all - prints anything
	 * @format: list of types of arguments passed to the function
	 */
	void print_all(const char * const format, ...)
	{
		int d = 0;
		char *str, *mvp = "";


		va_list don;


		va_start(don, format);


		if (format)
		{
			while (format[d])
			{
				switch (format[d])
				{
					case 'c':
						printf("%s%c", mvp, va_arg(don, int));
						break;
					case 'i':
						printf("%s%d", mvp, va_arg(don, int));
						break;
					case 'f':
						printf("%s%f", mvp, va_arg(don, double));
						break;
					case 's':
						str = va_arg(don, char *);
						if (!str)
							str = "(nil)";
						printf("%s%s", mvp, str);
						break;
					default:
						d++;
						continue;
				}
				mvp = ", ";
				d++;
			}
		}


		printf("\n");
		va_end(don);
	}
