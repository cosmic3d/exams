#include <unistd.h>

static void	ft_write(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char) * 1);
}

int	main(int argc, char **argv)
{
	size_t	i;

	i = -1;
	if (argc == 4)
		if (!(argv[2][1] || argv[3][1]))
			while (argv[1][++i])
			{
				if (argv[1][i] == argv[2][0])
					ft_write(argv[3][0]);
				else
					ft_write(argv[1][i]);
			}
	ft_write('\n');
	return (0);
}
