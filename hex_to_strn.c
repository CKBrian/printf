#include "main.h"
/**
 * to_hex - Converts an unsigned int to HEXA and stores as a string
 * @n: Unsigned integer to be converted
 * Return: Pointer to a string otherwise NULL
 */
char *to_hex(long int n)
{
	long int i, j, rem, div = n;
	char *str;
	hex_d arr[] = {
		{10, 'A'},
		{11, 'B'},
		{12, 'C'},
		{13, 'D'},
		{14, 'E'},
		{15, 'F'},
	};

	for (i = 0; div > 0; i++)
		div /= 16;
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL); }
	*(str + i) = '\0';
	i--;
	for (; i >= 0; i--)
	{
		rem = n % 16;
		if (rem > 9)
		{
			for (j = 0; j < 6; j++)
			{
				if (arr[j].num == rem)
				{
				*(str + i) = arr[j].h;
				n /= 16;
				break; }
			}
		}
		else
		{
			*(str + i) = rem + '0';
			n /= 16; }
	}
	return (str);
}
