#include "main.h"

/**
 * print_oct - prints a number in octal
 * @args: variable argument list
 * Return: number of bytes printed to stdout
 */
int print_oct(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 8);

	return (count);
}

/**
 * print_unsigned - prints an unsigned decimal number
 * @args: variable arguments list
 * Return: number of bytes printed to stdout
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 10);

	return (count);
}
