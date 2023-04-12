#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int search_str(char *str);
int counter_str(char *str);
char **strtow(char *str);

/**
 * search_str - A function that finds index of the first of a string
 * @str: The string
 *
 * Return: Pointer to the string
 */
int search_str(char *str)
{
	int index = 0;
	int max = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		max++;
		index++;
	}
	return (max);
}

/**
 * counter_str - A function that counter number of words in a string
 * @str: The str to count
 *
 * Return: Number of words count
 */
int counter_str(char *str)
{
	int index = 0;
	int word = 0;
	int max = 0;

	for (index = 0; *(str + index); index++)
		max++;
	for (index = 0; index < max; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += search_str(str + index);
		}
	}
	return (word);
}

/**
 * strtow - A function that splits a string into words
 * @str: String to split
 *
 * Return: A pointer to the string
 */
char **strtow(char *str)
{
	int index = 0;
	int word, w, alpha, a;
	char **s;

	if (str == 0 || str[0] == '\0')
		return (NULL);
	word = counter_str(str);
	if (word == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (word + 1));
	if (s == NULL)
		return (NULL);
	for (w = 0; w < word; w++)
	{
		while (str[index] == ' ')
			index++;
		alpha = search_str(str + index);
		s[w] = malloc(sizeof(char) * (alpha + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);
			free(s);
			return (NULL);
		}
		for (a = 0; a < alpha; a++)
			s[w][a] = str[index++];
		s[w][a] = '\0';
	}
	s[w] = NULL;
	return (s);
}
