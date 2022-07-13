#include <unistd.h>

void	ft_wdmatch(char *s, char *charset)
{
	ssize_t	i;

	i = -1;
	while (s[++i])
	{
		while (*charset && (*charset != s[i]))
			++charset;
		if (*charset == '\0')
			return ;
		++charset;
	}
	write(STDOUT_FILENO, s, sizeof(char) * i);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
