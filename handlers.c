#include "main.h"

/**
 * get_spec - get specifier
 * @spec: specifier to be got
 *
 * Return: If specifier is matched - a pointer to the function
 *         Otherwise               - NULL
 */

int (*get_spec(char spec))(va_list)
{
	int i;
	spec_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'S', print_S},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned_num},
		{'o', print_octal_num},
		{'x', print_hex},
		{'X', print_HEX},
		{'R', _rot13},
		{'b', convert_binary},
		{'p', print_pointer},
		{'r', print_rev_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (i = 0; specifiers[i].f; i++)
	{
		if (specifiers[i].spec == spec)
			return (specifiers[i].f);
	}

	return (NULL);
}
