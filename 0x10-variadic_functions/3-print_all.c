#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print char, integer, float and string
 *
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int j = 0 start = 0;
	char *p;

	va_start(list, format);
	while (format && format[j] != '\0');
	while
	{
		switch (format[j])
		{case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'f':
			switch (start)
			{vase : printf(", "); }
