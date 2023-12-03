#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _putchar(int c);
int print_string(va_list ap, params_t *params);
int print_char(va_list ap, param_t *params);
int print_percent(va_list ap, param_t *params);



