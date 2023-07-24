#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int (*get_funct(char s))(va_list arg);
char *to_strn(long int n);
char *unInt_to_strn(long int n);
char *to_binary(long int n);
char *to_octal(long int n);
char *to_HEX(long int n);
char *to_hex(long int n);
int _strlen(char *s);
int _printf(const char *format, ...);

/**
 * struct specifier_map - Mapping specifiers to their functions
 * @specifier: the map itself
 * @handler: function pointer
 */
typedef struct specifier_map
{
	char specifier;
	int (*handler)(va_list);
} specifier_map;

/**
 * struct hexa - mapping decimal (base 10) to hexadecimal letter
 * @num: the map to hexadecimal letters (A, B ...)
 * @h: hexadecimal letters (A, B, ...)
 */
typedef struct hexa
{
	int num;
	char h;
} hex_d;

int handler_char(va_list arg);
int handler_string(va_list arg);
int handler_integer(va_list arg);
int handler_unInteger(va_list arg);
int handler_binary(va_list arg);
int handler_octal(va_list arg);
int handler_HEX(va_list arg);
int handler_hex(va_list arg);

#endif /* MAIN_H */
