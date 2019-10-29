#include "holberton.h"

void *_intdup(int str)
{
    int *arr;

    arr = malloc((1 * sizeof(*arr)));

    if (!arr)
        return (NULL);

    *arr = str;

    return ((void *)arr);
}
