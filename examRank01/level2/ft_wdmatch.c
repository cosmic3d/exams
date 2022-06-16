#include <unistd.h>

void	ft_wdmatch(char *s, char *charset)
{
	size_t	i;

	i = 0;
	while (s[++i])
	{
		while ((*charset != s[i]) && *charset != '\0')
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
