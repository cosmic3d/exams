size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (s[++i])
	{
		j = -1;
		while (reject[++j])
			if (s[i] == reject[j])
				return (i);
	}
	i = -1;
	while (s[++i]);
	return (i);
}
