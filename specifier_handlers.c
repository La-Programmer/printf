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
	int number = va_arg(list, int);
	int len = num_len(number) + 1;
	char *str = malloc(len * sizeof(char));

	_itoa(number, str);

	return (buffer_handler(buffer, buffer_count, str));
}
