#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	i;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	i = (nbr % 10) + '0';
	write(STDOUT_FILENO, &i, sizeof(char) * 1);
}

int	main(int argc, char **argv)
{
	(void) argv;
	ft_putnbr(argc - 1);
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
