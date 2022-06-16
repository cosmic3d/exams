#include <stdio.h>

unsigned int	ft_lcm(unsigned int a, unsigned int b)
{
	unsigned int	tmp;

	if (!a || !b)
		return (0);
	if (a > b)
		tmp = a;
	else
		tmp = b;
	while (1)
	{
		if ((tmp % a) == 0 && (tmp % b) == 0)
			return (tmp);
		++tmp;
	}
}

//--==--==--==--==--==--==--==--

int main(void)
{
     printf("%u\n", ft_lcm(3, 43));
     return (0);
}
