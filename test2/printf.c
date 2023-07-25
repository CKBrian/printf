#include "main.h"
/**
 * struct specifier_map specifiers: Struct of specifiers and handler function
 * @specifiers: Array of struct specifier_map with handler functs & specifiers
 */
struct specifier_map specifiers[] = {
	{'c', handler_char},
	{'s', handler_string},
	{'i', handler_integer},
	{'d', handler_integer},
	{'%', handler_char},
};
/**
 * _printf - produces output according to a format
 * @format: Pointer to format string containing format specifiers
 * Return: No of characters written to stdout else -1
 */

int _printf(const char *format, ...)
{
	int j;
	int k;
	va_list arg;

	va_start(arg, format);

	for (j = 0; format[j] != '\0'; j++)
	{
	if (format[j] == '%')
	{
		for (k = 0; k < 4; k++)
		{
			if (format[j + 1] == specifiers[k].specifier)
			{
				specifiers[k].handler(arg);
				j++;
				break;
			}
			else if (k == 3)
				write(1, &format[j], 1);
		}
	}
	else
		write(1, &format[j], 1);
	}
	va_end(arg);
	return (0);
}

