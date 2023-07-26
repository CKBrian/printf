#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
char *rot13(char *str);
char *rev_string(char *s);
int (*get_funct(char s))(va_list arg);
char *to_strn(long int n);
char *unInt_to_strn(unsigned int n);
char *to_binary(unsigned int n);
char *to_pointer(unsigned long int n);
char *to_octal(unsigned int n);
char *to_HEX(unsigned int n);
char *to_hex(unsigned int n);
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
	unsigned int num;
	char h;
} hex_d;

int write_rev_string(va_list arg);
int write_rot13_string(va_list arg);
int write_char(va_list arg);
int write_string(va_list arg);
int write_Sstring(va_list arg);
int write_integer(va_list arg);
int write_unInteger(va_list arg);
int write_binary(va_list arg);
int write_octal(va_list arg);
int write_HEX(va_list arg);
int write_hex(va_list arg);
int write_pointer(va_list arg);

#endif /* MAIN_H */
