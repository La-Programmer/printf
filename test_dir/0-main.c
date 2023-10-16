#include "main.h"
#include <stdio.h>
/**
* main - Tests working of custom printf function
* Return: Always 0
*/
int main(void)
{
	/*char *str = "Justin is a man";
	char c = 65;*/
	int a, b;

	/*_printf("Justin is a man\n");
	_printf("%s\n", str);
	_printf("Justin is %c man\n", c);*/
	a = _printf("Just checking this edge case%%\n");
	_putchar('\n');
	/*printf("Justin is a man\n");
	printf("%s\n", str);
	printf("Justin is %c man\n", c);*/
	b = printf("Just checking this edge case%%\n");
	printf("Cutom return:%d\tOriginal return:%d\n", a, b);
	return (0);
}
