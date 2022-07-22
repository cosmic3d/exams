#include <unistd.h>

int	main(int argc, char **argv)
{
	ssize_t	i;
	char	*str;

	i = -1;
	str = argv[1];
	if (argc == 2)
	{
		while (str[++i] && (str[i] == '\t' || str[i] == ' '));
		while (str[++i] && (str[i] != '\t' && str[i] != ' '))
			write(STDOUT_FILENO, &str[i], sizeof(char));
	}
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
