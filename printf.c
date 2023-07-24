#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: Pointer to format string containing format specifiers
 * Return: No of characters written to stdout else -1
 */
int _printf(const char *format, ...)
{
	int j, k, bytes = 0;
	va_list arg;
	char p_holder[] = "scidbXxou";

	va_start(arg, format);

	for (j = 0; format[j] != '\0'; j++)
	{
	if (format[j] == '%')
	{
		if (format[j + 1] == '%')
		{
			bytes += write(1, &format[j], 1);
			j++;
		}
		else
		{
		for (k = 0; k < 9; k++)
		{
			if (format[j + 1] == p_holder[k])
			{
				bytes += (*get_funct(p_holder[k]))(arg);
				j++;
				break;
			}
			else if (k == 8)
				bytes += write(1, &format[j], 1);
		} }
	}
	else
		bytes += write(1, &format[j], 1);
	}
	va_end(arg);
	return (bytes);
}

