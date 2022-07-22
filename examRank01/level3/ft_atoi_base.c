#include <stdio.h>

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	ft_get_digit(char c, int db)
{
	int	max_digit;
	if (db <= 10)
		max_digit = db + '0';
	else
		max_digit = db - 10 + 'a';

	if (c <= max_digit && (c >= '0' && c <= '9'))
		return (c - '0');
	else if (c <= max_digit && (c >= 'a' && c <= 'f'))
		return (c - 'a' + 10);
	else
		return (-1);
}

int	ft_atoi_base(const char *s, int	base)
{
	int	res;
	int	sign;
	int	digit;

	res = 0;
	sign = 1;
	if (*s == '-')
	{
		sign = -1;
		++s;
	}
	while ((digit = ft_get_digit(ft_tolower(*s), base)) >= 0)
	{
		res *= base;
		res += digit * sign;
		++s;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("15690b80B", 13));
}
