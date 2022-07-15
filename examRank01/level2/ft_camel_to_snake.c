#include <unistd.h>

void	ft_cts(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
		{	
			write(STDOUT_FILENO, "_", sizeof(char));
			*s += ('a' - 'A');
		}
		write(STDOUT_FILENO, s, sizeof(char));
		++s;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_cts(argv[1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
