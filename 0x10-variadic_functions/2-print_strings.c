#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_strings - prints all strings with a separator
* @separator: separe strings
* @n: int, number of undefined arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
		else
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
