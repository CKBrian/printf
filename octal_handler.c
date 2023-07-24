#include "main.h"
/**
 * handler_octal - Prints integer to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_octal(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = to_octal(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
	return (strlen);
}
