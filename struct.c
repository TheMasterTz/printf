#include "holberton.h"

int (*get_struct(const char *p))(va_list)
{
specifier_f specifiers[] = {
{"i", print_int},
{"d", print_int},
{"c", print_char},
{"s", print_string},
{"%", print_port},
{NULL, NULL}
};
int i;
for (i = 0; specifiers[i].specifier != NULL; i++)
{
if (*(specifiers[i].specifier) == *p
{
break;
}
}
return (specifiers[i].punt);
}
