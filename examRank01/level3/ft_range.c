#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*tmp;
	int	*ptr;

	size = end - start;
	if (size)
	{
		ptr = (int *)malloc(sizeof(int) * size);
		if (!ptr)
			return (NULL);
		tmp = ptr;
		while (start <= end)
			*ptr++ = start++;
		return (tmp);
	}
	return (NULL);
}
