#include <unistd.h>

int	main(int argc, char **argv)
{
	ssize_t	i;
	char	*s;

	i = -1;
	s = argv[1];
	if (argc == 2)
		while (s[++i])
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = 'M' - (s[i] - 'N');
			else if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = 'm' - (s[i] - 'n');
			write(STDOUT_FILENO, &s[i], sizeof(char) * 1);
		}
	write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
