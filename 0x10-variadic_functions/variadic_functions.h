#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct prints - struct for 3
 * @type: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	void (*f)(va_list a);
} printer;
#endif
