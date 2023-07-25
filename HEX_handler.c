#include "main.h"
/**
 * handler_HEX - Prints hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_HEX(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = to_HEX(num);
	int strlen = _strlen(str);

	if (num == 0)
		write(1, "0", 1);
	else
		write(1, str, strlen);
	free(str);
	return (strlen);
}
