#include "main.h"
/**
 * handle_integer - Prints integer to stdout
 * @arg: integer argument
 * Return: Nothing
 */
void handle_integer(va_list arg)
{
	int num = va_arg(arg, int);
	char *str = to_strn(num);
	int strlen = _strlen(str);

	write(1, str, strlen);
	free(str);
}
