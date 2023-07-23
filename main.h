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
#endif /* MAIN_H */
