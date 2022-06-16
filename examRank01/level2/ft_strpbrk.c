int	ft_findc(const char c, const char s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		++s;
	}
	return (0);
}

char *ft_strpbrk(const char *s, const char *accept)
{
	while (*s)
	{
		if (ft_findc(*s, accept) == 1)
			return ((char *) s);
		++s;
	}
	return (NULL);
}
