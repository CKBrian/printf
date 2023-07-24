#include "main.h"
/**
 * handler_hex - Prints hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = to_hex(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
	return (strlen);
}
