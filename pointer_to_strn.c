#include "main.h"
/**
 * to_pointer - Converts an unsigned int to HEXA and stores as a string
 * @n: Unsigned integer to be converted
 * Return: Pointer to a string otherwise NULL
 */
char *to_pointer(unsigned long int n)
{
	unsigned long int rem, div = n;
	char *str;
	int i, j;
	hex_d arr[] = {
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'}, };

	for (i = 0; div > 0; i++)
		div /= 16;
	i += 2;
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL); }
	*(str + i) = '\0';
	*(str + 0) = '0';
	*(str + 1) = 'x';
	i--;
	for (; i > 1; i--)
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
			} }
		else
		{	*(str + i) = rem + '0';
			n /= 16; } }
	return (str); }
