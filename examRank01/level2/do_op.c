#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	k;
	int	rst;

	if (argc == 4)
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);
		k = argv[2][0];
		if (k == '+')
			rst = i + j;
		else if (k == '-')
			rst = i - j;
		else if (k == '*')
			rst = i * j;
		else if (k == '/')
			rst = i / j;
		else if (k == '%')
			rst = i % j;
		printf("%d\n", rst);
	}
	else
		write(STDOUT_FILENO, "\n", sizeof(char) * 1);
	return (0);
}
