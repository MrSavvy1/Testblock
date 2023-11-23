#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
  int len2;
  char *str = "When you invoke GCC , it normally does preprocessing, , assembly and linking. w\n";

  
  len2 = _printf("%r",str);
  
  return (0);
}
