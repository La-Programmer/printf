#include <unistd.h>
#include "main.h"
/**
* print_buffer - Writes a buffer to standard output
* @buffer: Buffer to write
* @buffer_count: Number of bytes to print
* Return: Number of characters printed
*/
int print_buffer(char *buffer, unsigned int buffer_count)
{
	return (write(1, buffer, buffer_count));
}
