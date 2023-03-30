#include "main.h"
#include <stdio.h>

/**
 * leet - A function that encodes a string into 1337
 * @src: String to encode
 *  
 * Return: Encoded string
 * */
char *leet(char *str)
{
	int en = 0, enc;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[en])
	{
		for (enc = 0; enc <= 7; enc++)
		{
			if (str[en] == leet[enc] || str[en] - 32 == leet[enc])
				str[en] = enc + '0';
		}
		en++;
	}
	return (str);
}
