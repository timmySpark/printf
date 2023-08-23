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

	buffer_store_char(c);
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
		buffer_store_char(*str++);
		count++;
	}

	return (count);
}

/**
 * print_S - print non printable characters and strings
 *@args: Arguments list
 *
 * Return: Then number of characters counted
 */

int print_S(va_list args)
{
	char *str;
	int count = 0;

	str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			buffer_store_char('\\');
			buffer_store_char('x');

			if (*str < 16)
			{
				buffer_store_char('0');
				count++;
			}

			count += store_hex(*str, 'x');
			count++;
		}
		else
		{
			buffer_store_char(*str);
			count++;
		}

		str++;
	}

	return (count);
}


/**
 * print_percent - print percentage
 * @args: arguments to be inputted
 *
 * Return: On success - 1.
 */

int print_percent(va_list args)
{
	(void) args;
	buffer_store_char('%');
	return (1);
}

