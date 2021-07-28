#include "holberton.h"

int print_port(va_list args)
{
    putchar('%');
    return(1);
}

int print_char(va_list args)
{
    char ch = va_arg(args, int);

    putchar(ch);
    return (1);
}
int print_string(va_list args)
{
    int count;
    char *str = va_arg(args, char *);

    if (str == NULL)
        str = "(null)";
    for (count = 0; str[count]; count++)
    {
        putchar(str[count]);
    }
    return (count);
}
