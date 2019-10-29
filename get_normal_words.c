#include "holberton.h"

/**
 * get_normal_words - Something.
 * @str: Variable.
 * @numOfFlags: Variable.
 * @flag: Variable.
 *
 * Return: normalWords.
 */

char **get_normal_words(char *str, int numOfFlags, char flag)
{
	int i = 0;
	char **normalWords = malloc((numOfFlags + 1) * sizeof(char **));

	if (!normalWords)
		exit(37);

	for (i = 0; i <= numOfFlags; i++, str = next_flag(str, flag) + 3)
		normalWords[i] = get_substr_delimited(str, next_flag(str, flag));

	return (normalWords);
}
