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

void	ft_print_hex(int nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
		ft_print_hex(nbr / 16);
	write(STDOUT_FILENO, &hex[nbr % 16], sizeof(char));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
