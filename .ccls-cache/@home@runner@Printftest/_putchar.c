#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * @c: char
 * Return: integer >=0 if success or -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
