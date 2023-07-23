#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

char *to_strn(int n);

int _strlen(char *s);

int _printf(const char *format, ...);

typedef void (*specifier_handler)(va_list);

struct specifier_map
{
	char specifier;
	specifier_handler handler;
};

void handler_char(va_list arg);
void handler_string(va_list arg);
void handler_integer(va_list arg);

struct specifier_map specifiers[] = 
{
	{'c', handler_char},
	{'s', handler_string},
	{'i', handler_integer},
	{'d', handler_integer},
};

#endif /* MAIN_H */
