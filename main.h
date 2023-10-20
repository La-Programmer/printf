#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
* struct handler - Struct handler
* @s: The specifier
* @f: The associated function
*/
typedef struct handler
{
	char specifier;
	int (*func)(va_list, char *, unsigned int);
} hd;

int print_buffer(char *buffer, unsigned int buffer_count);
int buffer_handler(char *buffer, unsigned int buffer_count, char *str);
int _printf(const char *format, ...);

/* GET SPECIFIER HANDLER FUNCTION */
int (*get_handler(char s))(va_list, char *, unsigned int);

/* HANDLER FUNCTIONS */
int char_handler(va_list, char *buffer, unsigned int buffer_count);
int string_handler(va_list, char *buffer, unsigned int buffer_count);

#endif /* MAIN_H */
