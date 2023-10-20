#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/* CONSTANTS */
#define BUFFER_SIZE 1024
#define ERR1 "Unsupported specifier\n"

/**
* _printf - A custom printf function
* @format: The string to be printed along with its specifiers
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list list;
	char buffer[BUFFER_SIZE], temp_char, temp_str[2];
	unsigned int buffer_count = 0, count = 0;
	int (*handler)(va_list list, char *buffer, unsigned int buffer_count);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[count] != '\0')
	{
		if (format[count] == '%')
		{
			count++;
			if (format[count] == '%')
				buffer_count = buffer_handler(buffer, buffer_count, "%");
			else
			{
				handler = get_handler(format[count]);
				if (handler == NULL)
				{
					temp_str[0] = format[count];
					temp_str[1] = '\0';
					buffer_count = buffer_handler(buffer, buffer_count, "%");
					buffer_count = buffer_handler(buffer, buffer_count, temp_str);
				}
				else
					buffer_count = handler(list, buffer, buffer_count);
			}
		}
		else
		{
			temp_char = format[count];
			temp_str[0] = temp_char;
			temp_str[1] = '\0';
			buffer_count = buffer_handler(buffer, buffer_count, temp_str);
		}
		count++;
	}
	print_buffer(buffer, buffer_count);
	return (buffer_count);
}
