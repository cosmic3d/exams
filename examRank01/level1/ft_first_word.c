#include <unistd.h>

// ft_firstword -> imprime la primera palabra pasada como argumento.

static void	ft_write(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

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
			ft_write(str[i]);
	}
	ft_write('\n');
	return (0);
}
