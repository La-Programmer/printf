#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* string_handler - Handles string specifier
* @list: Variadic list
* @buffer: Buffer
* @buffer_count: Buffer count
* Return: Buffer count
*/
int string_handler(va_list list, char *buffer, unsigned int buffer_count)
{
	return (buffer_handler(buffer, buffer_count, (va_arg(list, char *))));
}

/**
* char_handler - Handles string specifier
* @list: Variadic list
* @buffer: Buffer
* @buffer_count: Buffer count
* Return: Buffer count
*/
int char_handler(va_list list, char *buffer, unsigned int buffer_count)
{
	char c = va_arg(list, int);
	char str[2];

	str[0] = c;
	str[1] = '\0';
	return (buffer_handler(buffer, buffer_count, str));
}

/**
* decimal_handler - Handles decimal specifier
* @list: Variadic list
* @buffer: Buffer
* @buffer_count: Buffer count
* Return: Buffer count
*/
int decimal_handler(va_list list, char *buffer, unsigned int buffer_count)
{
	int number = va_arg(list, int), len = num_len(number) + 1;
	unsigned int result;
	char *str;

	if (number < 0)
		str = malloc((len + 1) * sizeof(char));
	else
		str = malloc(len * sizeof(char));

	if (str == NULL)
		return (-1);
	_itoa(number, str);

	result = (buffer_handler(buffer, buffer_count, str));
	free(str);

	return (result);
}
