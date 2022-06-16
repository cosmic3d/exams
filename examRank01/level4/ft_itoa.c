#include <stdlib.h>

int	ft_absval(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		++len;
	while (nbr)
	{
		++len;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int	len;

	len = ft_nbrlen(nbr);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		--len;
		res[len] = ft_absval(nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}
