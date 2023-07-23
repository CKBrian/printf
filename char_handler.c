#include "main.h"

/**
 * handler_char - Entry point
 *
 * Description: Handling function for %c specifier
 * @arg: argument
 *
 * Return: Void
 */

void handler_char(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
}
