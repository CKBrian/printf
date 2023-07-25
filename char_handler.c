#include "main.h"

/**
 * write_char - Entry point
 *
 * Description: Handling function for %c specifier
 * @arg: argument
 *
 * Return: 1
 */

int write_char(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}
