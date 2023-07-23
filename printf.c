#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: Pointer to format string containing format specifiers
 * Return: No of characters written to stdout else -1
 */
int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);

	for (int j = 0; format[j] != '\0'; j++)
	{
	if (format[j] == '%')
	{
	for (int k = 0; k < sizeof(specifiers) / sizeof(specifiers[0]); k++)
	{
		if (format[j + 1] == specifiers[k].specifier)
		{
			specifiers[k].handler(arg);
			j++;
			break;
		}
	}
	}
	else
	{
		write(1, &format[j], 1);
	}
	}

	va_end(arg);
	return (0);
}

