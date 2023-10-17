#include "main.h"
#include <stdio.h>
/**
* main - Testing customized printf function
* Return: Always 0
*/
int main(void)
{
	char c = 97;
	char *str = "String output case";
	char *str2 = "smart";
	int a, b;

	/*_printf("Obi is %c boy\n", c, str); It printed, it shouldn't*/
	/*_printf("Obi is %c %s boy\n", str2, c); Supposed to give an error*/
	a = _printf("%s\n", str);
	_printf("Print edge case: %%\n");
	_putchar('\n');
	printf("Obi is %c boy\n", c);
	b = printf("%s\n", str);
	printf("Print edge case: %%\n");
	_putchar('\n');
	printf("Custom printf: %d\tOriginal printf: %d\n", a, b);
	return (0);
}
