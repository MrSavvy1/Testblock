#include "../main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n;

	n = _printf("Hello %s, char->%c. This should print a percent %%\n", "Ezekiel", 'z');
	_printf("Number of bytes written is %d\n", n);
	_printf("%p\n", (void *)0x7fff5100b608);
	printf("%p\n", (void *)0x7fff5100b608);
	return (0);
}
