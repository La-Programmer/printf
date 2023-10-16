#include "main.h"
#include <stdio.h>
/**
* main - Testing customized printf function
* Return: Always 0
*/
int main(void)
{
	char c = NULL;
	char *str = NULL;
	int a, b;

	_printf("Custom printf\n");
	_printf(NULL);
	_printf("Print null char: %c\n", c);
	a = _printf("Print null string: %s\n", str);
	_putchar('\n');
	printf("Original printf\n");
	printf(NULL); /* Does not run */
	printf("Print null char: %c\n", c); /* Gives nothing */
	b = printf("Print null string: %s\n", str); /* Prints (null) */
	printf("Custom printf: %d\tOriginal printf: %d\n", a, b);
	return (0);
}
