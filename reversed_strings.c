#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_rev_string - print reversed string
 *
 * @args: arguments List
 *
 * Return: number of reversed strings
 */

int print_rev_string(va_list args)
{
	char *str = va_arg(args, char *);
	char *rev;
	int i, count = 0;

	rev = rev_str(str);

	if (rev == NULL)
		return (-1);

	for (i = 0; rev[i]; i++)
	{
		buffer_store_char(rev[i]);
		count++;
	}

	free(rev);
	return (count);
}

/**
 * rev_str - reverse string
 * @str: string to be reversed
 *
 * Return: reversed strings
 */

char *rev_str(char *s)
{
	int len = 0, i;
	char *rev, temp;

	while (s[len] != '\0')
		len++;

	rev = malloc(sizeof(char) * (len + 1));

	if (!rev)
		return (NULL);

	for (i = 0; i < len; i++)
		rev[i] = s[i];

	rev[len] = '\0';

	for (i = 0; i < len / 2; i++)
	{
		temp = rev[i];
		rev[i] = rev[len - 1 - i];
		rev[len - 1 - i] = temp;
	}

	return (rev);
}
