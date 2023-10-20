#include "main.h"
#define BUFFER_SIZE 1024
/**
 * buffer_handler - Handles buffer operation
 * @str: String to be added to the buffer
 * @buffer: Buffer
 * @buffer_count: Buffer count
 * Return: Number of characters printed
 */
int buffer_handler(char *buffer, unsigned int buffer_count, char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (buffer_count == BUFFER_SIZE)
			print_buffer(buffer, buffer_count);
		buffer[buffer_count] = str[count];
		count++;
		buffer_count++;
	}
	buffer[buffer_count] = '\0';

	return (buffer_count);
}
