#include "main.h"

/**
 * write_string - Entry point
 * Description: Handling function for strings
 * @arg: argument passed
 * Return: Output string length
 */

int write_string(va_list arg)
{
	char *str = va_arg(arg, char*);
	int strlen;

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	else
	{
		strlen = _strlen(str);
		write(1, str, strlen);
	}
	return (strlen);
}
