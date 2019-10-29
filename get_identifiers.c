#include "holberton.h"

/**
 * get_identifiers - Something.
 * @str: Variable.
 * @flag: Variable.
 * @flagOpts: Variable.
 * @lenFlagOps: Variable.
 *
 * Return: identifiers.
 */

char *get_identifiers(char *str, char flag, exisDT flagOpts[], int lenFlagOps)
{
	char *identifiers;
	int i = 0;
	int k = 0;

	identifiers = malloc(number_of_flags(str, flag) + 1);
	if (!identifiers)
		exit(35);

	for (; str && *str; str++)
		if (*str == flag)
		{
			str++;
			for (i = 0; i < lenFlagOps; i++)
			{
				if (*str == flagOpts[i].flag)
				{
					identifiers[k] = *str;
					k++;
					break;
				}
				if (!*str)
					return ("-1");
				else if (i == lenFlagOps - 1)
				{
					identifiers[k] = 'w';
					k++;
					break;
				}
			}
		}
	identifiers[k] = '\0';
	return (identifiers);
}
