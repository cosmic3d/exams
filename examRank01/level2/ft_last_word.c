#include <unistd.h>

int	main(int argc, char **argv)
{
	ssize_t	i;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i]);
		i--;
		while (i > 0 && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--;
		while (argv[1][++i])
			write(STDOUT_FILENO, &argv[1][i], sizeof(char));
	}
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
