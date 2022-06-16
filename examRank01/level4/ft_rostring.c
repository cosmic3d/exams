#include <unistd.h>

static int	ft_skip(char *s, int i)
{
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	return (i);
}

static int	ft_wdlen(char *s)
{
	int	i;

	i = -1;
	while (s[++i] && s[i] != ' ' && s[i] != '\t');
	return (i);
}

static int	ft_print(char *s, int i, int *first)
{
	int	len;

	i = ft_skip(s, i);
	len = ft_wdlen(s + i);
	if (*first == 0)
		write(STDOUT_FILENO, " ", sizeof(char) * 1);
	write(STDOUT_FILENO, s + i, sizeof(char) * len);
	*first = 0;
	return (i + len);
}

static int	ft_eput_str(char *s)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	i = ft_skip(s, i);
	while (s[i])
	{
		i = ft_print(s, i, &first);
		i = ft_skip(s, i);
	}
	return (first);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		char	*s;
		int	i;
		int	first;
		
		s = argv[1];
		i = 0;
		i = ft_skip(s, i);
		i += ft_wdlen(s + i);
		first = ft_eput_str(s + i);
		ft_print(s, 0, &first);
	}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
