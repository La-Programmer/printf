#include "main.h"
/**
* _itoa - Converts an integer to a string
* @num: Number to convert
* @str: Pointer to string
* Return: Pointer to string
*/
char *_itoa(int num, char *str)
{
	int len = num_len(num);

	str[len] = '\0';
	while ((len - 1) >= 0)
	{
		str[len - 1] = '0' + (num % 10);
		num /= 10;
		len--;
	}

	return (str);
}
