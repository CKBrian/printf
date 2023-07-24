#include "main.h"
/**
 * handler_integer - Prints integer to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_integer(va_list arg)
{
	long int num = va_arg(arg, long int);
	char *str = to_strn(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
	return (strlen);
}
