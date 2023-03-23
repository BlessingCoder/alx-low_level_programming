#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - printfs a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - printfs an int from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - printfs a float from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}
