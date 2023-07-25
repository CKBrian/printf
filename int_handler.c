#include "main.h"
/**
 * handler_integer - Prints integer to stdout
 * @arg: integer argument
 * Return: String length
 */
int handler_integer(va_list arg)
{
	int num = va_arg(arg, int);
	char *str = to_strn(num);
	int strlen = _strlen(str);

	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
		write(1, str, strlen);
	free(str);
	return (strlen);
}
