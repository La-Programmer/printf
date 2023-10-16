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

	while (str[counter] != '\0')
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

	while (format[counter] != '\0')
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
	unsigned int len = count(format), counter = 0;
	unsigned int arg_count = count_args(format), add = 0;
	char c, *str;

	va_start(args, format);
	while (format[counter] != '\0')
	{
		if (format[counter] == '%')
		{
			switch (format[counter + 1])
			{
			case 'c':
				c = va_arg(args, int);
				add += _putchar(c);
				counter++;
				break;
			case 's':
				str = va_arg(args, char *);
				add += _puts(str);
				counter++;
				break;
			case '%':
				_putchar('%');
				add += 1;
				counter++;
				break;
			default:
				_puts("ERROR: Unsupported specifier");
				exit(90);
			}
		}
		else
			_putchar(format[counter]);

		counter++;
	}
	va_end(args);
	return (len - (arg_count * 2) + add);
}
