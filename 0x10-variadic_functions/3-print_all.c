#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sp = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(arg, double));
					break;
				case 's':
					string = va_arg(arg, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sp, string);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg);
}
