#include "main.h"
/**
 * write_hex - Prints hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int write_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = to_hex(num);
	int strlen = _strlen(str);

	if (num == 0)
		strlen = write(1, "0", 1);
	else
		write(1, str, strlen);
	free(str);
	return (strlen);
}
