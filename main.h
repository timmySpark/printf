#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/* prototypes for functions */

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_spec(char spec))(va_list);
int find_specifier(const char *format, va_list args);

int print_char(va_list args);
int print_string(va_list args);
int print_S(va_list args);
int print_percent(va_list args);

int _put_int(int num, int count);
int print_int(va_list args);

int print_pointer(va_list args);
int convert_binary(va_list args);
int store_hex(unsigned long int n, char _case);

int print_u_num(unsigned int n, unsigned int base);
int print_unsigned_num(va_list args);
int print_octal_num(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
char rot13_char(char c);
int _rot13( va_list args);


char *rev_str(char *s);
int print_rev_string(va_list args);

void buffer_store_char(char c);
void empty_buffer(void);

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
