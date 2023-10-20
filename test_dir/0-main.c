#include "main.h"
#include <stdio.h>
/**
* main - Testing customized printf function
* Return: Always 0
*/
int main(void)
{
	int result, res1, res2, res3, res4, res5, res6, res7, res8, res9;
	char *str = "Test string 1";
	char c = 'a';
	char *str2 = "Take me to church";
	char c2 = 'g', c3 = 'o', c4 = 'o', c5 = 'd';

	result = _printf("%c\n", c);
	res1 = _printf("%s\n", str);
	res2 = _printf("%s\n", str2);
	res3 = _printf("This is a %c%c%c%c day\n", c2, c3, c4, c5);
	res4 = _printf("Confirming this edge case %%\n");
	_printf("---------------------\n");
	res5 = printf("%c\n", c);
	res6 = printf("%s\n", str);
	res7 = printf("%s\n", str2);
	res8 = printf("This is a %c%c%c%c day\n", c2, c3, c4, c5);
	res9 = printf("Confirming this edge case %%\n");

	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", result, res1, res2, res3, res4, res5, res6, res7, res8, res9);

	return (0);
}
