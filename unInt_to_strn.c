#include "main.h"
/**
 * unInt_to_strn - Converts an int to a string
 * @n: Integer to be converted to string
 * Return: Pointer to a string otherwise NULL
 */

char *unInt_to_strn(unsigned int n)
{
	int i;
	unsigned int div = n;
	char *str;

	for (i = 0; div > 0; i++)
	{
		div /= 10;
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
		*(str + i) = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
