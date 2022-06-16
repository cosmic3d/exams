#include <unistd.h>

static int	ft_skip(char *s, int i)
{
	while (s[i++] && (s[i] == ' ' || s[i] == '\t'));
	return (i);
}

static int	ft_wdlen(char *s)
{
	int	i;
	
	i = 0;
	while  (s[i++] && (s[i] != ' ' && s[i] != '\t'));
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	spaces;
	int	len;

	i = ft_skip(argv[1], i);
	spaces = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (spaces == 0)
				write(STDOUT_FILENO, " ", sizeof(char) * 1);
			len = ft_wdlen(argv[1] + i);
			write(STDOUT_FILENO, argv[1] + i, sizeof(char) * len);
			i += len;
			spaces = 0;
			i = ft_skip(argv[1], i);
		}
	}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
