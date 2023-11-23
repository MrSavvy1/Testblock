#include "main.h"

/**
 * unknown - this function is called when the character does
 * does not match any valid identifier
 * @fmt: format character
 * Return: number of bytes written
 */
int unknown(const char *fmt)
{
	int count;

	/* this is just place holder code */
	/* subject to refactoring */
	count = 0;
	count += write(1, "%", 1);
	count += write(1, fmt, 1);
	return (count);
}
