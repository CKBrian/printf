#include "main.h"

/**
 * write_Sstring - Entry point
 * Description: Handling function for strings
 * @arg: argument passed
 * Return: Output string length
 */

int write_Sstring(va_list arg)
{
	char *str = va_arg(arg, char*);
	int strlen = 0, i = 0;
	unsigned int k;
	char *ptr = NULL, *s = "\\x";

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
		if (*(str + i) < 32 || *(str + i) >= 127)
		{
			k = *(str + i);
			strlen += write(1, s, 2);
			if (k < 16)
				strlen += write(1, "0", 1);
			ptr = to_HEX(k);
			strlen += write(1, ptr, 1);

		}
		strlen += write(1, &(*(str + i)), 1);
		}
	}
	free(ptr);
	return (strlen);
}
