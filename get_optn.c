#include "main.h"
/**
 * get_funct - Selects argument to print to stdout
 * @s: Pointer to operator passed as argument
 * Return: Pointer to funtion
 */
int (*get_funct(char s))(va_list arg)
{
	specifier_map opts[] = {
	{'c', handler_char},
	{'s', handler_string},
	{'i', handler_integer},
	{'d', handler_integer},
	{'u', handler_unInteger},
	{'b', handler_binary},
	{'X', handler_HEX},
	{'x', handler_hex},
	{'o', handler_octal},
	};
	int i = 0;

	while (i < 9)
	{
		if (s == opts[i].specifier)
			return (opts[i].handler);
		i++;
	}
	return (NULL);
}
