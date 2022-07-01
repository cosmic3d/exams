#include <unistd.h>

// ft_firstword -> imprime la primera palabra pasada como argumento.

static void	ft_write(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char) * 1);
}

int	main(int argc, char **argv)
{
	size_t	i;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i] && (argv[1][i] == '\t' || argv[1][i] == ' '));
		while (argv[1][++i] && (argv[1][i] != '\t' && argv[1][i] != ' '))
			ft_write(argv[1][i]);
	}
	ft_write('\n');
	return (0);
}
