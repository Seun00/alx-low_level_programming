#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h
/**
 * print_all - prints all
 * @format: format string that says arg types
 *
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	char *sep2 = ", ";
	va_list anyArgs;
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(anyArgs, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep);
				ops[j].f(anyArgs);
			}
			j++;
		}
		sep = sep2;
		i++;
	}
	printf("\n");
	va_end(anyArgs);
}
