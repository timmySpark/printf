#include "main.h"

/**
 * convert_binary - convert the unsigned int argument to binary
 * @args: arguments to be inputted
 *
 * Return: number of characters counted
 */

int convert_binary(va_list args)
{
	unsigned int num, mask;
	int count = 0;

	num = va_arg(args, unsigned int);
	mask = 1 << (sizeof(unsigned int) * 8 - 1);

	if (num == 0)
	{
		buffer_store_char('0');
		return (1);
	}

	while (!(num & mask) && mask)
		mask >>= 1;

	while (mask)
	{
		if (num & mask)
		{
			buffer_store_char('1');
			count++;
		}
		else
		{
			buffer_store_char('0');
			count++;
		}

		mask >>= 1;
	}


	return (count);
}

/**
 * store_hex - print an unsigned long int as a hexadecimal number
 * @n: Number to be printed
 *
 * Return: Number of digits printed
 */

int store_hex(unsigned long int n, char _case)
{
	int count = 0;

	if (n >= 16)
		count += store_hex(n / 16, _case);

	if (n % 16 < 10)
	{
		buffer_store_char((n % 16) + '0');
		count++;
	}
	else
	{
		if (_case == 'x')
			buffer_store_char((n % 16) - 10 + 'a');
		else if (_case == 'X')
			buffer_store_char((n % 16) - 10 + 'A');
		count++;
	}

	return (count);
}

/**
 * print_pointer - print a memory address
 * @args: arguments to be inputted
 *
 * Return: Number of characters printed;
 */

int print_pointer(va_list args)
{
	void *num = va_arg(args, void *);
	unsigned long int address = (unsigned long int) num;
	int count = 0;
	char *null_str;

	if (num == NULL)
	{
		null_str = "(nil)";

		while (*null_str)
		{
			buffer_store_char(*null_str++);
			count++;
		}

		return (count);
	}
	else
	{
		buffer_store_char('0');
		buffer_store_char('x');
		count += 2;
		count += store_hex(address, 'x');
		return (count);
	}
}
