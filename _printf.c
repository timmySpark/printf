#include "main.h"
#include <stdarg.h>

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
	int (*func)(va_list);

	va_start(args, format);

	if (!format || (format[0] == '%' &&
				(!format[1] || (format[1] == ' ' &&
						!format[2]))))
		return (-1);


	while (*format)
	{
		if (*format == '%')
		{
			format++;

			func = get_spec(*format);
			if (func)
				char_count += func(args);
			else
			{
				_putchar(*format);
				char_count++;
			}
		}
		else
		{
			_putchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
