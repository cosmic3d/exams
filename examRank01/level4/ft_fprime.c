#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nbr)
{
	int     i;

	i = 2;
	while (i < nbr)
	{
		if ((nbr % i) == 0)
			return (0);
		i++;
	}
	return (1);	
}

void    ft_fprime(char *s)
{
	int nbr;
	int idx;
	int	j;

	nbr = atoi(s);
	idx = 2;
	j = 1;
	if (nbr <= 1)
        printf("1");
    while (idx <= nbr)
	{
		while ((nbr % idx) == 0 && ft_is_prime(idx))
		{
			if (j == 1)
				printf("%d", idx);
			else
				printf("*%d", idx);
			j = 0;
			nbr /= idx;
		}
		++idx;
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_fprime(argv[1]);
    printf("\n");
    return (0);
}