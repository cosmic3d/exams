char	*ft_strchr(const char *s, int c)
{
	while (*s && s != NULL)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	ssize_t	i;

	i = -1;
	while (s[++i])
		if (ft_strchr(accept, s[i]) == 0)
			break ;
	return (i);
}
