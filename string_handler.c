#include "main.h"

/**
 * handler_string - Entry point
 *
 * Description: Handling function for strings
 * @arg: argument passed
 *
 * Return: Void
 */

void handler_string(va_list arg)
{
	char *str = va_arg(arg, char*);
	if(str == NULL)
	{
		write(1, "(null)", 6);
	}
	else
	{
		int strlen = _strlen(str);
		write(1, str, strlen);
	}
}
