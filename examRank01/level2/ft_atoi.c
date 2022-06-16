int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			break ;
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * negative);
}
