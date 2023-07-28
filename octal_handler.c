#include "main.h"
/**
 * write_octal - Prints integer to stdout
 * @arg: integer argument
 * Return: String length
 */
int write_octal(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = to_octal(num);
	int strlen;

	if (num == 0)
		strlen = write(1, "0", 1);
	else
	{
		strlen = _strlen(str);
		write(1, str, strlen);
	}
	free(str);
	return (strlen);
}
