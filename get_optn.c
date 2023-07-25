#include "main.h"
/**
 * get_funct - Selects argument to print to stdout
 * @s: Pointer to operator passed as argument
 * Return: Pointer to funtion
 */
int (*get_funct(char s))(va_list arg)
{
	specifier_map opts[] = {
	{'c', write_char},
	{'s', write_string},
	{'S', write_Sstring},
	{'i', write_integer},
	{'d', write_integer},
	{'u', write_unInteger},
	{'b', write_binary},
	{'X', write_HEX},
	{'x', write_hex},
	{'o', write_octal},
	{'p', write_pointer},
	};
	int i = 0;

	while (i < 11)
	{
		if (s == opts[i].specifier)
			return (opts[i].handler);
		i++;
	}
	return (NULL);
}
