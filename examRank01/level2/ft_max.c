int	max(int *tab, unsigned int len)
{
	int	max;
	
	if (!len)
		return (NULL);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
