#include "main.h"

/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 */
int printf_rot13(va_list args)
{
  int i, counter = 0;
  char *s = va_arg(args, char*);
  char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *beta = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

  if (s == NULL)
    s = "(null)";

  for (i = 0; s[i]; i++)
  {
    char current_char = s[i];
    char replacement_char = current_char;
    int is_lowercase = (current_char >= 'a' && current_char <= 'z');
    int is_uppercase = (current_char >= 'A' && current_char <= 'Z');

    if (is_lowercase || is_uppercase)
    {
      char *source = is_lowercase ? alpha : alpha + 26;
      char *target = is_lowercase ? beta : beta + 26;
      int index = is_lowercase ? (current_char - 'a') : (current_char - 'A');

      replacement_char = target[index];
    }

    _putchar(replacement_char);
    counter++;
  }

  return (counter);
}
