#include "main.h"
/**
 * write_integer - Prints integer to stdout
 * @arg: integer argument
 * Return: String length
 */
int write_integer(va_list arg)
{
	int num = va_arg(arg, int);
	char *str = to_strn(num);
	int strlen;

	if (str == NULL || num == 0)
	{
		strlen = write(1, "0", 1);
	}
	else
	{
		strlen = _strlen(str);
		write(1, str, strlen);
	}
	free(str);
	return (strlen);
}
