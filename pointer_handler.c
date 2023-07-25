#include "main.h"
/**
 * handler_pointer - Prints pointer hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_pointer(va_list arg)
{
	unsigned long int num = va_arg(arg, unsigned long int);
	char *str = to_pointer(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
	return (strlen);
}
