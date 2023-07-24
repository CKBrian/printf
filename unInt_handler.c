#include "main.h"
/**
 * handler_unInteger - Prints integer to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_unInteger(va_list arg)
{
	long int num = va_arg(arg, long int);
	char *str = unInt_to_strn(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
	return (strlen);
}
