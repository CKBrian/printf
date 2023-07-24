#include "main.h"
/**
 * to_octal - Converts an unsigned int to octal and stores as a string
 * @n: Unsigned integer to be converted to octal
 * Return: Pointer to a string otherwise NULL
 */
char *to_octal(unsigned int n)
{
	unsigned int div = n;
	char *str;
	int i;

	for (i = 0; div > 0; i++)
	{
		div /= 8;
	}
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	*(str + i) = '\0';
	i--;
	for (; i >= 0; i--)
	{
		*(str + i) = (n % 8) + '0';
		n /= 8;
	}
	return (str);
}
