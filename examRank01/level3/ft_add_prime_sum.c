#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;

	res = 0;
	while (*s && (*s >= '0' && *s <= '9'))
	{
		res = res * 10 + (*s - 48);
		++s;
	}
	return (res);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + 48;
	write(STDOUT_FILENO, &c, sizeof(char));
}

int	ft_prime(int nbr)
{
	int	j;

	j = 2;
	while (j < nbr)
	{
		if ((nbr % j) == 0)
			return (0);
		++j;
	}
	return (1);
}	

int	ft_add_prime_sum(int nbr)
{
	int	sum;
	int	i;

	sum = 0;
	i = 2;
	while (i <= nbr)
	{
		if (ft_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2 && (i = ft_atoi(argv[1])))
		ft_putnbr(ft_add_prime_sum(i));
	else
		ft_putnbr(0);
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
