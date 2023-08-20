#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/* prototypes for functions */

int _putchar(int c);
int _printf(const char *format, ...);
int (*get_spec(char spec))(va_list);
int find_specifier(const char **format, va_list args);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int convert_binary(va_list args);

/**
 * struct specifier - Struct specifier
 * @spec: specs containig the conversion specifiers
 * @f: a function pointer to a function that prints the spec
 *                              corresponding to the pattern
 */

typedef struct specifier
{
	char spec;
	int (*f)(va_list args);
} spec_t;



#endif
