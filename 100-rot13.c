#include "main.h"
/**
 * rot13 - Encodes a string replacing with 13th character in ascii
 * @str: Pointer to string to be encoded
 * Return: String
 */
char *rot13(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{}
	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	*(s + (i - 1)) = '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
		if ((str[i] > 'm' && (str[i] >= 'a' && str[i] <= 'z')) ||
			(str[i] > 'M' && (str[i] >= 'A' && str[i] <= 'Z')))
		{
			*(s + i) = (str[i] - 13);
			break;
		}
		*(s + i) = (str[i] + 13);
		break;
		}
		if  (!(str[i] >= 'a' && str[i] <= 'z') &&
				!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			*(s + i) = str[i];
		}
	}
	return (s);
}
