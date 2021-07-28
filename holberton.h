#ifndef _PRINTF_
#define _PRINTF_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct specifier_t
{
	char *specifier;
	int (*f)(va_list);
} specifier_f;


/**/
int _putchar(char c);
/*struct.c*/
int (*get_struct(char *p))(va_list);
int get_print(char *p, va_list args);
/*print_functions.c*/
int print_int(va_list i);
int print_char(va_list args);
int print_string(va_list args);
/*prinft.c*/
int _printf(const char *format, ...);
#endif
