#include "main.h"
/**
 * handler_HEX - Prints hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_HEX(va_list arg)
{
	long int num = va_arg(arg, long int);
	char *str = to_HEX(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
	return (strlen);
}
