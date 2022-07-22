#include <unistd.h>

int	main(int argc, char **argv)
{
	ssize_t	i;

	i = -1;
	if (argc == 4)
	{
		if (!(argv[2][1] || argv[3][1]))
			while (argv[1][++i])
			{
				if (argv[1][i] == argv[2][0])
					write(STDOUT_FILENO, argv[3][0], sizeof(char));
				else
					write(STDOUT_FILENO, &argv[1][i], sizeof(char));
			}
	}
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
