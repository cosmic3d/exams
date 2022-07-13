#include <unistd.h>

void	ft_print_bits(unsigned char oct)
{
	int		i;
	unsigned char	j;
	char		dst;

	i = 8;
	j = 1;
	while (i-- > 0)
	{
		dst = ((oct >> i) & j) + '0';
		write(STDOUT_FILENO, &dst, sizeof(char));
	}
}

/* int     main(void)
{
        ft_print_bits(0);
        write(1, "\n", 1);
        ft_print_bits(1);
        write(1, "\n", 1);
        ft_print_bits(74);
        write(1, "\n", 1);
        ft_print_bits(127);
        write(1, "\n", 1);
        ft_print_bits(158);
        write(1, "\n", 1);
        ft_print_bits(255);
        write(1, "\n", 1);
}*/