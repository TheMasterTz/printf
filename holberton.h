#ifndef _PRINTF_
#define _PRINTF_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct specifier_t
{
    char *specifier;
    int (*punt)(va_list);
} specifier_f;

int _putchar(char pt);
int (*get_struct(const char *p))(va_list);
int get_print(char *p, va_list args);
int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_port(va_list args);
int _printf(const char *format, ...);
#endif
