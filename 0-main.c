#include "main.h"
#include <stdio.h>
/**
* main - Testing customized printf function
* Return: Always 0
*/
int main(void)
{
	char c = '1';
	char d = '2';
	char *str = "Justin";
	int a, b;

	_printf("Custom printf\n");
	_printf("Testing the microphone %c, %c\n", c, d);
	_printf("Print my name: %s\n", str);
	a = _printf("Print edge case: %%\n");
	_putchar('\n');
	printf("Original printf\n");
	printf("Testing the microphone 1, 2\n");
	printf("Print my name: %s\n", str);
	b = printf("Print edge case: %%\n");
	printf("Custom printf: %d\tOriginal printf: %d\n", a, b);
	return (0);
}
