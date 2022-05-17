#include <stdarg.h>
#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
<<<<<<< HEAD
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
=======
 * print_op - function to check which specifier to print
 * @format: string being passed
 * @print_arr: array of struct ops
 * @list: list of arguments to print
 * Return: numb of char to be printed
=======
#include <stddef.h>

/**
 * get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
>>>>>>> 5c7636c999978b9e9e48601720c162bbf26e4d5d
 */

int (*get_op(const char c))(va_list)
{
	int i = 0;

	flags_p fp[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_nbr},
		{"d", print_nbr},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"u", print_unsigned},
		{"S", print_str_unprintable},
		{"r", print_str_reverse},
		{"p", print_ptr},
		{"R", print_rot13},
		{"%", print_percent}
	};
	while (i < 14)
	{
		if (c == fp[i].c[0])
		{
			return (fp[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * _printf - Reproduce behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				func = get_op(format[i + 1]);
			if (func == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			}
			else
			{
				sum += func(ap);
				i += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
	}
<<<<<<< HEAD
	return (count);
}

/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;

	fmt_t ops[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{"b", _bin},
		{"i", _int},
		{"u", _ui},
		{"o", _oct},
		{"x", _hex_l},
		{"X", _hex_u},
		{"R", _rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	a = print_op(format, ops, list);
	va_end(list);
	return (a);
>>>>>>> 1c63af7ec7c3bcca3c4dea1ad0c89e64b3ef1d4e
=======
	va_end(ap);
	return (sum);
>>>>>>> 5c7636c999978b9e9e48601720c162bbf26e4d5d
}
