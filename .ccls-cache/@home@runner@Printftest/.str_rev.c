int str_rev(va_list args)
{
  char *s;
  int count;

  count = 0;
  int i = 0;
  s = va_arg(args, char *);
  if (s == NULL)
    return (write(1, "(null)", 6));
  while (*s && s[i] != '\0')
    {
    char strin = s[i];
    i += 1;
    }
  for (int j = i - 1; j >= 0; j--)
    count += write(1, &s[j], 1);

  return (count);
}

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

  