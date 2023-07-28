#include "main.h"
/**
 * write_HEX - Prints hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int write_HEX(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = to_HEX(num);
	int strlen;

	if (str == NULL || num == 0)
		strlen = write(1, "0", 1);
	else
	{
		strlen = _strlen(str);
		write(1, str, strlen);
	}
	free(str);
	return (strlen);
}
