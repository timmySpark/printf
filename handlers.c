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
		{'b', convert_binary},
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
