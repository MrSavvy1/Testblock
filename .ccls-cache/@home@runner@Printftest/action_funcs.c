#include "main.h"

/**
 * print_char - prints a character to stdout
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_str - prints a string to stdout
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_str(va_list args)
{
	char *s;
	int count;

	count = 0;
	s = va_arg(args, char *);
	/* subject to refactoring */
	/* introduce a strlen func to get the length of the string */
	/* and call write only once without the need for a loop */
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (*s)
		count += write(1, s++, 1);
	return (count);
}

/**
 * print_pcnt - prints a percentage symbol to stdout
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_pcnt(va_list args)
{
	(void) args;
	return (_putchar('%'));
}

/**
 * print_digit - handles printing of digits
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_digit(va_list args)
{
	int count;
	int n;

	count = 0;
	n = va_arg(args, int);

	count += _print_digit((long)n, 10);

	return (count);
}

/**
 * print_hex - handles printing integer
 * @args: list of variables arguments
 * Return: number of bytes written to stdout
 */
int print_hex(va_list args)
{
	int count;
	unsigned int n;

	count = 0;
	n = va_arg(args, unsigned int);

	count += _print_digit((long)n, 16);

	return (count);
}
