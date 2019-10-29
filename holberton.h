#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct DataType - Something.
 * @data: Variable.
 * @type: Variable.
 * @config: Variable.
 *
 * Return: Nothing.
 */

typedef struct DataType
{
	void *data;
	char type;
	char *config;
} dt;

/**
 * struct existentDT - Something.
 * @flag: Variable.
 * @f: Variable.
 *
 * Return: nothing..
 */

typedef struct existentDT
{
	char flag;
	void (*f)(dt *, va_list);
} exisDT;
int _strcmp(char *s1, char *s2);
int _putchar(char c);
void _put_str(char *s);
void free_grid_char(char **grid, int size);
unsigned int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
void print_number(long inp);
int number_of_flags(char *inp, char flag);
void *_intdup(int str);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *get_identifiers(char *str, char flag, exisDT flagOpts[], int lenFlagOps);
void struct_to_int (dt *object, va_list arg);
void s_char(dt *object, va_list arg);
void s_string(dt *object, va_list arg);
void s_stringw(dt *object, va_list arg);
char *get_identifiers(char *str, char flag, exisDT flagOpts[], int lenFlagOps);
void struct_to_int (dt *object, va_list arg);
void s_char(dt *object, va_list arg);
void s_string(dt *object, va_list arg);
void s_stringw(dt *object, va_list arg);
dt *get_variadic_values(int len, va_list args, const char *type,
			 exisDT flagOpts[], int lenFlagOps);
char *get_substr_delimited(char *start, char *end);
char *next_flag(char *str, char flag);
char **get_normal_words(char *str, int numOfFlags, char flag);
char *create_buffer(char **normalWords, int items, dt *elements);
int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
