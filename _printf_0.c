#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
* count - Counts the number of characters in a string
* @str: String to be counted
* Return: Number of characters in the string
*/
int count(const char *str)
{
	int counter = 0;

	while (str[counter] != '\0' && str != NULL)
		counter++;

	return (counter);
}

/**
* count_args - Counts the number of expected variable arguments to the
* _printf function using the specifiers present in the format argument
* @format: String from which to count specifiers
* Return: Number of specifiers found.
*/
int count_args(const char *format)
{
	int arg_count = 0, counter = 0;

	while (format[counter] != '\0' && format != NULL)
	{
		if (format[counter] == '%')
		{
			switch (format[counter + 1])
			{
			case 'c':
				arg_count++;
				break;
			case 's':
				arg_count++;
				break;
			case '%':
				arg_count++;
				break;
			}
		}
		counter++;
	}
	return (arg_count);
}

/**
* _printf - Produces an output according to a format passed as an arg
* @format: Constant string to be passed
* Return: Number of characters printed SUCCESS else something else
* FAILURE
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int counter, result = 0;
	char c, *str, *null_str = "(null)";

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (counter = 0; format[counter] != '\0' && format != NULL; counter++)
	{
		if (format[counter] == '%')
		{
			counter++;
			if (format[counter] == '%')
			{
				_putchar('%');
				result += 1;
			}
			else if (format[counter] == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				if (c)
					result += 1;
			}
			else if (format[counter] == 's')
			{
				str = va_arg(args, char *);
				if (str)
					result += _puts(str);
				else
					result += (_puts(null_str));
			}
		}
		else
		{
			_putchar(format[counter]);
			result++;
		}
	}
	va_end(args);
	return (result);
}
