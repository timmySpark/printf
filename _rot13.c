#include "main.h"

/**
 * rot13_char - calculate roted 13
 * @c: letter to be encoded
 *
 * Return: letter to be encoded
 */

char rot13_char(char c)
{
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; j < 52; j++)
	{
		if (c == alpha[j])
			return (rot13[j]);
	}

	return (c);
}

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

int _rot13(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (!str)
		return (-1);

	while (*str)
	{
		buffer_store_char(rot13_char(*str));
		count++;
		str++;
	}

	return (count);

}
