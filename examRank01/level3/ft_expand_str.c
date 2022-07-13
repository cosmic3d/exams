#include <unistd.h>
#include <stdio.h>

static int	ft_wdlen(char *s)
{
	int	i;
	
	i = 0;
	while  (s[i] && s[i] != ' ' && s[i] != '\t')
		++i;
	return (i);
}
     
void	ft_expand_str(char *s)
{
	int	spaces;
	int	len;

	spaces = 1;
	while (*s)
	{
		while (*s == ' ' || *s == '\t')
			++s;
		len = ft_wdlen(s);
		if (len > 0 && spaces == 0)
			write(STDOUT_FILENO, "   ", sizeof(char) * 3);
		spaces = 0;
		write(STDOUT_FILENO, s, sizeof(char) * len);
		s += len;
	}
}
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}
