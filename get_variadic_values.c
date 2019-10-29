#include "holberton.h"

/**
 * get_variadic_values - Something.
 * @len: Variable.
 * @args: Variable.
 * @type: Variable.
 * @flagOpts: Variable.
 * @lenFlagOps: Variable.
 *
 * Return: store.
 */

dt *get_variadic_values(int len, va_list args,
			const char *type, exisDT flagOpts[], int lenFlagOps)
{
	int i = 0;
	int k = 0;
	dt *store = malloc(len * sizeof(dt));

	if (!store)
		exit(34);

	for (i = 0; i < len; i++)
		for (k = 0; k < lenFlagOps; ++k)
			if (type[i] == flagOpts[k].flag)
			{
				flagOpts[k].f(&store[i], args);
				break;
			}

	return (store);
}
