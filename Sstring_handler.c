#include "main.h"

/**
 * write_hex_char - Helper function to write a single hexadecimal character
 * @c: The character to be written
 * Return: Number of characters written (1)
 */
int write_hex_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * write_Sstring - Handling function for %S specifier
 * @arg: va_list containing the arguments
 * Return: Length of the output string
 */
int write_Sstring(va_list arg)
{
	char *str = va_arg(arg, char*);
	int i, strlen = 0;
	char hex[3];

	if (str == NULL)
	{
	return (write(1, "(null)", 6));
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] < 32 || str[i] >= 127)
	{
		hex[0] = '\\';
		if ((str[i] >> 4) < 10)
			hex[1] = (str[i] >> 4) + '0';
		else
			hex[1] = (str[i] >> 4) - 10 + 'A';
		if ((str[i] & 0x0F) < 10)
			hex[2] = (str[i] & 0x0F) + '0';
		else
			hex[2] = (str[i] & 0x0F) - 10 + 'A';

		strlen += write(1, hex, 3);
	}
	else
	{
		strlen += write(1, &str[i], 1);
	}
	}

	return (strlen);
}

