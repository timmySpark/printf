#include "main.h"
#include <unistd.h>

/**
 * _putchar - writed the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *         On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	buffer_store_char(c);

	return (1);
}
