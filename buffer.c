#include "main.h"
#include <unistd.h>
#define BUFFER_SIZE 1024

char buffer[BUFFER_SIZE];
int buffer_index = 0;

/**
 * empty_buffer - empty the local buffer
 */

void empty_buffer(void)
{
	if (buffer_index > 0)
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}
}

/**
 * buffer_store_char - adds a character to local bufer
 * @c: character to be added
 */

void buffer_store_char(char c)
{
	if (buffer_index == BUFFER_SIZE)
		empty_buffer();

	buffer[buffer_index++] = c;
}
