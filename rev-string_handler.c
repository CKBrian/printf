#include "main.h"

/**
 * write_rev_string - Entry point
 * Description: Handling function for strings
 * @arg: argument passed
 * Return: Output string length
 */

int write_rev_string(va_list arg)
{
	char *str = va_arg(arg, char*);
	char *s = rev_string(str);
	int strlen;

	if (s == NULL)
	{
		strlen = (write(1, "(null)", 6));
	}
	else
	{
		strlen = _strlen(s);
		write(1, s, strlen);
	}
	free(s);
	return (strlen);
}
