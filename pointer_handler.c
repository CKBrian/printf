#include "main.h"
/**
 * write_pointer - Prints pointer hexadecimal to stdout
 * @arg: integer argument
 * Return: String length
 */
int write_pointer(va_list arg)
{
	unsigned long int num = va_arg(arg, unsigned long int);
	char *str = to_pointer(num);
	int strlen = _strlen(str);

	if (num == 0)
	{
		write(1, "(nil)", 5);
	}
	else
		write(1, str, strlen);
	free(str);
	return (strlen);
}
