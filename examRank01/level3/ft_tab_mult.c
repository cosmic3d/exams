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
	c = (nbr % 10) + '0';
	write(STDOUT_FILENO, &c, sizeof(char) * 1);
}

void	ft_tab_mult(char *s)
{
	int	nbr;
	int	i;

	nbr = ft_atoi(s);
	i = 0;
	while (++i < 10)
	{
		ft_putnbr(i);
		write(STDOUT_FILENO, " x ", sizeof(char) * 3);
		ft_putnbr(nbr);
		write(STDOUT_FILENO, " = ", sizeof(char) * 3);
		ft_putnbr( i * nbr);
		write(STDOUT_FILENO, "\n ", sizeof(char) * 1);

	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_tab_mult(argv[1]);
	else
		write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
