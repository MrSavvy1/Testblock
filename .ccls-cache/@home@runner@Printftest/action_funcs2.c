#include "main.h"

/**
 * int_binary - writes or converts unsigned integer
 * to binary number
 * @args: number of unsigned int
 * Return: The counter for the written byte
*/

int int_binary(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 2);

	return (count);
}


/*---------------------------------*/


/**
 * print_custom_str - prints the string.
 * Non printable characters (0 < ASCII value < 32 or >= 127) are printed
 * this way \x, followed by the ASCII code value
 * in hexadecimal (upper case - always 2 characters)
 * @args: variable arguments list
 * Return: number of bytes printed to stdout
 */
int print_custom_str(va_list args)
{
	int count;
	char *s;

	count = 0;
	s = va_arg(args, char *);

	if (s == NULL)
		return (write(1, "(null)", 6));

	while (*s)
	{
		if ((*s > 0 && *s < 32) || *s >= 127)
		{
			count += write(1, "\\x", 2);
			if (*s < 16)
				count += _putchar('0');
			count += _print_digit((long)(*s), 16, UPPER);
			s++;
			continue;
		}
		count += _putchar(*s);
		s++;
	}
	return (count);
}

/**
 * print_addr - prints memory address in hex
 * @args: variable argument list
 * Return: number of bytes written to stdout
 */
int print_addr(va_list args)
{
	int count;
	unsigned long n;

	count = 0;
	n = va_arg(args, unsigned long);

	if (!n)
		return (write(1, "(nil)", 5));

	count += write(1, "0x", 2);
	count += _print_digit((unsigned long)n, 16);
	return (count);
}
