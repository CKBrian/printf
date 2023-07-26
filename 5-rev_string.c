#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String-containing variable
 * Return: String in reverse
 */
char *rev_string(char *s)
{
	int i, k = 0;
	int length, mid, first, last;
	char *str;
	/* Calculates lenght of string in s[] array */
	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{}
	i++;
	str = malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);
	*(str + (i - 1)) = '\0';
	i--;
	/* Define the midpoint */
	length = i - 1;
	mid = (length / 2) + 1;

	/* copy the string in reverse order to the s[] array */
	for (i = length; (i + 1) >= mid; i--)
	{
		last = s[i];
		first = s[k];
		str[i] = first;
		str[k] = last;
		k++;
	}
	return (str);
}
