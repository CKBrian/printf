#include "main.h"
/**
 * get_funct - Selects argument to print to stdout
 * @s: Pointer to operator passed as argument
 * Return: Pointer to funtion
 */
void (*get_funct(char *s))(va_list arg)
{
	struct specifier_map opts[] = {
        {'c', handler_char},
        {'s', handler_string},
        {'i', handler_integer},
        {'d', handler_integer},
        {'%', handler_char},
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(opts[i].specifier)
			return (opts[i].handler);
		i++;
	}
}
