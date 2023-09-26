#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE
#define CONVERT_Unsigned

/**
 * struct parameters - parameters for struct function
 * @unsign: throw error if unssigned
 * @plus_flag: plus flag
 * @space_flag: space flag
 * @hashtag_flag: # flag
 * @zero_flag: zero flag
 * @minus_flag: minus flad
 * @width: width specified
 * @precision: precision specified
 * @h_modifier: h flag
 * @l_modifier: modifier flag
 *
 */

typedef struct specifier
{
	char *specifier;
	int (*f) (va_list, params_t *);
}specifier_t;

int _puts(char *str); /* puts c file */
int _putchar(int c); /*puts c file */

int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);

char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_adresses(va_list ap, params_t *params);

int (*get_specifier(char *s)) (va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, param_t *params);
char get_width(char *s, params_t *params);

int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);

int print_from_to(char *start, char *stop, char *except);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);

int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);

void init_params(params_t *params, va_list ap);

char *get_precision(char *p, params_t *params, va_list ap);

int _printf(const char *format, ...);

#endif
