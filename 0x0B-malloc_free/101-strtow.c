#include "main.h"
#include <stdlib.h>

/**
 * word_counter - function that counts the number of words in a string
 * @s: the string
 * Return: number of words
 */

int word_counter(char *s)
{
	int i, check = 0, words = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			words++;
		}
	}

	return (words);
}

/**
 * strtow - function that splits string into words
 * @str: the string
 * Return: pointer the array of words or NULL
 */

char **strtow(char *str)
{
	char **word_array;
	int i, j = 0, len = 0, words;

	while (str[len])
		len++;
	if (len == 0)
		return (NULL);
	words = word_counter(str);
	if (words == 0)
		return (NULL);
	word_array = malloc(sizeof(char *) * (words + 1));
	if (word_array == NULL)
		return (NULL);

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			i = 0;
			while (*(str + i) != ' ' && *(str + i) != '\0')
				i++;
			word_array[j] = malloc(sizeof(char) * (i + 1));
			if (word_array[j] == NULL)
			{
				for (; j >= 0; j--)
					free(word_array[j]);
				free(word_array);
				return (NULL);
			}
			for (i = 0; *str != ' ' && *str != '\0'; i++, str++)
				word_array[j][i] = *str;
			word_array[j][i] = '\0';
			j++;
		}
	}
	word_array[j] = NULL;
	return (word_array);
}
