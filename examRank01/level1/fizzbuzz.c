#include <unistd.h>

static void	ft_putnbr(int nbr)
{
	char *c;

	c = "0123456789";
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write(STDOUT_FILENO, &c[nbr % 10], 1);
}

int	main(void)
{
	size_t	i;

	i = 0;
	while (++i <= 100)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	}
	return (0);
}
