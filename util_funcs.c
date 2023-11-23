#include "main.h"

/**
 * fetch_func - returns the appropriate action function
 * that gets the next va_arg argument on the va_list
 * @c: pointer to identifier character
 * Return: pointer to action function
 */
int (*fetch_func(char c))(va_list)
{
	int i;
	fmt_t fmt_funcs[] = {
		{'d', print_digit},
		{'o', print_oct},
		{'u', print_unsigned},
		{'i', print_digit},
		{'X', print_hex_caps},
		{'x', print_hex},
		{'c', print_char},
		{'s', print_str},
		{'S', print_custom_str},
		{'%', print_pcnt},
		{'b', int_binary},
		{'r', str_rev},
		{'p', print_addr},
    {'R', printf_rot13},
		{'\0', NULL}
	};

	i = 0;
	while (fmt_funcs[i].c)
	{
		if (c == fmt_funcs[i].c)
			return (fmt_funcs[i].action_func);
		i++;
	}
	return (fmt_funcs[i].action_func);
}

/**
 * _print_digit - a recursive utility function to print
 * digits to different base
 * @num: number to be printed
 * @base: base specifier
 * Return: number of bytes written to stdout
 */
int _print_digit(long num, int base, ...)
{
	int count, cap;
	char *symbols = "0123456789abcdef";
	va_list args;

	va_start(args, base);
	cap = va_arg(args, int);

	if (cap != UPPER && cap != LOWER && cap != DEFAULT)
		return (_print_digit(num, base, DEFAULT));

	count = 0;
	if (num < 0)
	{
		_putchar('-');
		return (_print_digit(-num, base, cap) + 1);
	}

	if (num < base)
	{
		if (cap == UPPER && symbols[num] >= 97 && symbols[num] <= 122)
			return (_putchar(symbols[num] - 32));
		return (_putchar(symbols[num]));
	}

	count = _print_digit(num / base, base, cap);

	va_end(args);

	return (count + _print_digit(num % base, base, cap));
}
