#include <unistd.h>

int	main(int argc, char **argv)
{
	size_t	i;

	i = -1;
	if (argc == 2)
		while (argv[1][++i])
		{
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] -= 25;
			else if (argv[1][i] >= 'a' && argv[1][i] < 'z')
				argv[1][i] += 1;
			else if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
				argv[1][i] += 1;
			write(STDOUT_FILENO, &argv[1][i], sizeof(char) * 1);
		}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
