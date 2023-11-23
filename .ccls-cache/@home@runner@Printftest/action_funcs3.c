#include "main.h"

/**
 * str_rev - prints string i a reversed format
 * @args: variale argument
 * Return: number of byte printed
 */
int str_rev(va_list args)
{
	char *s;
	int count;

	count = 0;
  int i = 0;
	s = va_arg(args, char *);
	if (s == NULL)
  {
		return (write(1, "(null)", 6));
  }
	while (*s && s[i] != '\0')
    {
    char strin = s[i];
    i += 1;
    }
  for (int j = i - 1; j >= 0; j--)
    {
    count += write(1, &s[j], 1);
    }
	return (count);
}

/**
 * print_hex_caps - prints the character in caps
 * @args: variable arguments list
 * Return: number of bytes printed
 */
int print_hex_caps(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 16, UPPER);

	return (count);
}
