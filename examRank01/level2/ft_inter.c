#include <unistd.h>

int	ft_check(char *s, char c, int idx)
{
	size_t	i;

	i = -1;
	while (++i < idx)
		if (s[i] == c)
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (argc == 3)
		while (argv[1][++i])
		{
			j = -1;
			while (argv[2][++j])
				if (argv[1][i] == argv[2][j])
					if (!(ft_check(argv[1], argv[1][i], i)))
					{	
						write(STDOUT_FILENO, &argv[1][i], sizeof(char) * 1);
						break ;
					}
		}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
