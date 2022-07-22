#include <unistd.h>

static void	ft_putnbr(int nbr)
{
	char *c;

	c = "0123456789";
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	write(STDOUT_FILENO, &c[nbr % 10], sizeof(char));
}

int	main(void)
{
	ssize_t	i;

	i = 0;
	while (++i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(STDOUT_FILENO, "fizzbuzz", sizeof(char) * 8);
		else if (i % 3 == 0)
			write(STDOUT_FILENO, "fizz", sizeof(char) * 4);
		else if (i % 5 == 0)
			write(STDOUT_FILENO, "buzz", sizeof(char) * 4);
		else
			ft_putnbr(i);
	write(STDOUT_FILENO, "\n", sizeof(char));
	}
	return (0);
}
