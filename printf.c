#include "holberton.h"

int _printf(const char *format, ...)
{
    dt *elements;
    int usrFlags;
    char *typeFlags;
    char **normalWords;
    char flag = '%';
    int i = 0;

    exisDT flagOpts[] = {
            {'d', struct_to_int},
            {'i', struct_to_int}
    };

    int lenFlagOps = sizeof(flagOpts) / sizeof(flagOpts[0]);
    va_list args;

    if (!format)
        exit(100);

    va_start(args, format);

    /* get usr inputs by number of "%" */
    usrFlags = number_of_flags((char *) format, flag);
    /* get usr type inputs by alias of flag i, d, s, c, etc. */
    typeFlags = get_identifiers((char *) format, flag, flagOpts, lenFlagOps);
    /* make structure of every input */
    elements = get_variadic_values(usrFlags, args, typeFlags, flagOpts, lenFlagOps);
    /* list no variable words */
    normalWords = get_normal_words((char *) format, usrFlags, flag);

    _put_str(normalWords[0]);
    for (i = 0; i < usrFlags; i++)
    {
        print_number(*(int *) (elements[i].data));
        _put_str(normalWords[i + 1]);
    }

    free_grid_char(normalWords, usrFlags + 1);
    free(elements);
    va_end(args);

    return (0);
}
