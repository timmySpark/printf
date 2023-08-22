#include "main.h"
#include <stdarg.h>

/**
 * find_specifier - Processes a format specifier.
 * @format: Pointer to current position in the format string.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */

int find_specifier(const char *format, va_list args)
{
	int char_count = 0;
	int (*func)(va_list);

	format++;

	if (!format)
		return (-1);

	if (*format == '\0')
	{
		buffer_store_char('%');
		return (1);
	}

	func = get_spec(*format);

	if (func)
		char_count += func(args);
	else
	{
		buffer_store_char('%');
		buffer_store_char(*format);
		char_count += 2;
	}

	return (char_count);
}


/**
 * _printf - Print formatted strings
 * @format: list of types of arguments passed to the function
 *
 * Return: Number of characters printed
 */


int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;


	if (!format || (format[0] == '%' && (!format[1] ||
					(format[1] == ' ' && !format[2]))))
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			char_count += find_specifier(format, args);
			if (*(format + 1) != '\0')
				format++;
		}
		else
		{
			buffer_store_char(*format);
			char_count++;
		}

		format++;
	}

	empty_buffer();
	va_end(args);
	return (char_count);
}
