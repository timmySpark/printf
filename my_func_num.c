#include "main.h"

/**
 * convert_binary - convert the unsigned int argument to binary
 * @args: arguments to be inputted
 *
 * Return: number of characters counted
 */

int convert_binary(va_list args)
{
	unsigned int num, rem;
	int count = 0, i = 0, b;
	char bin[32];

	num = va_arg(args, unsigned int);

	if (!num)
	{
		num = 0;
		return (1);
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		rem = num % 2;
		bin[i++] = rem + '0';
		num /= 2;
	}

	for (b = i - 1; b >= 0; b--)
	{
		_putchar(bin[i]);
		count++;
	}

	bin[32] = '\0';
	return (count);
}
