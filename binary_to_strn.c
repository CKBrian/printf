#include "main.h"
/**
 * to_binary - Converts an unsigned int to binary and stores as a string
 * @n: Unsigned integer to be converted to binary
 * Return: Pointer to a string otherwise NULL
 */
char *to_binary(unsigned int n)
{
	int i;
	unsigned int div = n;
	char *str;

	for (i = 0; div > 0; i++)
	{
		div /= 2;
	}
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	*(str + i) = '\0';
	i--;
	for (; i >= 0; i--)
	{
		*(str + i) = (n % 2) + '0';
		n /= 2;
	}
	return (str);
}
