#include <unistd.h>

int	main(int argc, char **argv)
{
	ssize_t	i;
	ssize_t	j;

	i = -1;
	j = -1;
	if (argc == 3)
	{
		while (argv[1][++i])
			while (argv[2][++j] && (argv[1][i] != argv[2][j]));
		if (argv[2][j] == '\0')
		{
			write(STDOUT_FILENO, "0\n", sizeof(char) * 2);
			return (0);
		}
		write(STDOUT_FILENO, "1\n", sizeof(char) * 2);
	}
	return (0);
}
