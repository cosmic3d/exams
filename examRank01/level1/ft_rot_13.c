#include <unistd.h>

int	main(int argc, char **argv)
{
	ssize_t	i;
	char	*s;

	i = -1;
	s = argv[1];
	if (argc > 1)
	{
		while(s[++i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = (s[i] - 'a' + 13) % 26 + 'a';
			else if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = (s[i] - 'A' + 13) % 26 + 'A';
			write(STDOUT_FILENO, &s[i], sizeof(char));
		}
	}
	write(STDOUT_FILENO, "\n", sizeof (char));
	return (0);
}
