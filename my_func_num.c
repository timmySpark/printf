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
		_putchar('0');
		return (1);
	}

	while (!(num & mask) && mask)
		mask >>= 1;

	while (mask)
	{
		if (num & mask)
		{
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
			count++;
		}

		/*count++*/;
		mask >>= 1;
	}


	return (count);
}
