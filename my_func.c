#include "main.h"

/**
 * print_char - print characters
 * @args: arguments to be inputted
 *
 * Return: On success 1.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - print strings
 * @args: arguments to be inputted
 *
 * Return: the number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;

	if (!str)
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}

/**
 * print_percent - print percentage
 * @args: arguments to be inputted
 *
 * Return: On success -1.
 */

int print_percent(va_list args)
{
	(void) args;
	_putchar('%');
	return (-1);
}

