#include <unistd.h>
#include <stdlib.h>

void	ft_rev_wstr(char *s)
{
	int	i;
	int	j;
	int	fword;

	i = -1;
	fword = 1;
	while (s[++i]);
	while (i >= 0)
	{
		while (i >= 0 && (s[i] == '\0' || s[i] == ' ' || s[i] == '\t'))
			--i;
		j = i;
		while (j >= 0 && s[j] != ' ' && s[j] != '\t')
			--j;
		if (fword == 0)
			write (STDOUT_FILENO, " ", sizeof(char) * 1);
		write(STDOUT_FILENO, &s[j + 1], sizeof(char) * (i - j));
		fword = 0;
		i = j;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_wstr(argv[1]);
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
