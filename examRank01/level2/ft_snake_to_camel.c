#include <unistd.h>

void	ft_stc(char *s)
{
	while (*s)
	{
		if (*s == '_')
		{
			++s;
			*s -= ('a' - 'A');
		}
		write(STDOUT_FILENO, s, sizeof(char) * 1);
		++s;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_stc(argv[1]);
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
