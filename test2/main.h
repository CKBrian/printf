#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

char *to_strn(int n);

int _strlen(char *s);

int _printf(const char *format, ...);

/*typedef void (*specifier_handler)(va_list);*/

/**
 * struct specifier_map - Mapping specifiers to their functions
 * @specifier: the map itself
 * @handler: function pointer 
 *
 */

struct specifier_map
{
	char specifier;
	/*specifier_handler handler;*/
	void (*handler)(va_list);
};

void handler_char(va_list arg);
void handler_string(va_list arg);
void handler_integer(va_list arg);


#endif /* MAIN_H */
