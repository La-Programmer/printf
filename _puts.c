#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
* _puts - Prints a string;
* @str: String to be printed
* Return: Nothing
*/
int _puts(char *str)
{
	int count = 0;

	if (str == NULL)
		_putchar('\n');
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}
