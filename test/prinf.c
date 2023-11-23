#include "main.h"

/* This file will coordinate the logic to loop through the characters typed
 * search for identifiers and non identifiers
 * call functions to handle them respectively
 * allocate memory
 */

int _printf(const char *format, ...)
{
	int i, j;
	va_list un_args;
	char buf_byte_size;
	int measure = 0;
	int *collect;

	i = 0;
/*	j = 0;*/
	buf_byte_size = malloc(sizeof(char)*1024);
	va_start(un_args, format);

	while (!(format[i] == '\0'&& !format))
	{
		if (format[i] == '%' && format[i + 1]== ' ' || format[i] =='%' && format[i + 1] == '\0')
		{
			_putchar(format[i]);
		}
		else if (format[i] =='%' && format[i +1] )
		{
			collect =pfunc(format, format[i]);
			if (collect)
			{
				measure += collect;
			}
			i++;
		}
	if !(format)
	{
		return (-1);
	}
	_putchar(format[i]);
	free(buf_byte_size);
	va_end(un_args);
	}
