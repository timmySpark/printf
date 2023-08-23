#include "main.h"

/**
 * print_u_num - print unsigned decimal integer
 * @n: number to be printed
 * @base: base of number
 *
 * Return: number of integers printed
 */

int print_u_num(unsigned int n, unsigned int base)
{
	int count = 0;

	if (n >= base)
		count += print_u_num(n / base, base);

	buffer_store_char((n % base) + '0');
	count++;

	return (count);
}

/**
 * print_unsigned_num - print unsigned interger
 * @args: Argument List
 *
 * Return: number of unsigned num
 */

int print_unsigned_num(va_list args)
{
	unsigned int num;
	int count = 0;

	num = va_arg(args, unsigned int);
	count = print_u_num(num, 10);

	return (count);
}

/**
 * print_octal_num - print interger in octal base (base 8)
 * @args: arguments list
 *
 * Return: number of octal values gotten
 */

int print_octal_num(va_list args)
{
	unsigned int num;
	int count = 0;

	num = va_arg(args, unsigned int);
	count = print_u_num(num, 8);

	return (count);
}

/**
 * print_hex - print hexadecimal representation of an integer (lowercase)
 * @args: arguments list
 *
 * Return: converted number
 */

int print_hex(va_list args)
{
	unsigned long int num;

	num = va_arg(args, unsigned long int);

	if (num == 0)
	{
		buffer_store_char('0');
		return (1);
	}

	return (store_hex(num, 'x'));
}


/**
 * print_HEX - print hexadecimal representation of an integer (uppercase)
 * @args: arguments list
 *
 * Return: converted number
 */

int print_HEX(va_list args)
{
	unsigned long int num;

	num = va_arg(args, unsigned long int);


	if (num == 0)
	{
		buffer_store_char('0');
		return (1);
	}

	return (store_hex(num, 'X'));
}
