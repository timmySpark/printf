#include "main.h"

/**
 * _put_int - print integer numbers
 * @num: integer to be printed
 * @count: count
 *
 * Return: numbers of integers counted
 */

int _put_int(int num, int count)
{
	long int n = (long int) num;

	if (n == 0)
	{
		buffer_store_char('0');
		return (1);
	}

	if (n < 0)
	{
		buffer_store_char('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count = _put_int(n / 10, count);

	buffer_store_char(n % 10 + '0');
	count++;
	return (count);

}


/**
 * print_int - print integer numbers
 * @arg: Arguments List
 *
 * Return: numbers of integers counted
 */

int print_int(va_list args)
{
	int value = va_arg(args, int);
	int count = 0;

	return (_put_int(value, count));
}
