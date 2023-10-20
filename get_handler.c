#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* get_handler - Handles the selection of appropriate specifier functions
* @specifier: Specifier character.
* Return: Function pointer to appropriate specifier function
*/
int (*get_handler(char specifier))(va_list, char *, unsigned int)
{
	hd handlers[] = {
		{'c', char_handler},
		{'s', string_handler},
		{'i', decimal_handler},
		{'d', decimal_handler},
		{0, NULL}
	};
	int counter = 0;

	while (handlers[counter].specifier != 0)
	{
		if (handlers[counter].specifier == specifier)
			return (handlers[counter].func);
		counter++;
	}

	return (NULL);
}
