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
	int strlen;

	if (str == NULL || num == 0)
	{
		strlen = write(1, "(nil)", 5);
	}
	else
	{
		strlen = _strlen(str);
		write(1, str, strlen);
	}
	free(str);
	return (strlen);
}
