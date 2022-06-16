#include <unistd.h>

void	ft_str_capitalizer(char *s)
{
	while (*s)
	{
		while (*s && (*s == ' ' || *s == '\t'))
		{
			write(STDOUT_FILENO, s, sizeof(char) * 1);
			++s;
		}
		if (*s)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= ('a' - 'A');
			write(STDOUT_FILENO, s, sizeof(char) * 1);
			++s;
		}
		while (*s && *s != ' ' && *s != '\t')
		{
			if (*s >= 'A' && *s <= 'Z')
				*s += ('a' - 'A');
			write(STDOUT_FILENO, s, sizeof(char) * 1);
			++s;
		}
	}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
}

int	main(int argc, char **argv)
{
	size_t	i;

	i = 0;
	if (argc == 1)	
		write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	else
		while (argc > ++i)
			ft_str_capitalizer(argv[i]);
	return (0);
}
