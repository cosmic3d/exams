#include <stdlib.h>

int	ft_abs_val(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	nbrcount;
	int	*ptr;
	int	i;
	int	flag;

	i = 0;
	nbrcount = 1 + ft_abs_val(end - start);
	ptr = (int *)malloc(sizeof(int) * nbrcount);
	if (start > end)
		flag = 1;
	else
		flag = -1;
	while (nbrcount > i)
	{
		ptr[i++] = end;
		end += flag;
	}
	return (ptr);
}

//--==--==--==--==--==--==--==--==--

#include <stdio.h>

int          main(void)
{
     int start = 0;
     int end = -3;

     int *arr = ft_rrange(start, end);

     int i = 0;
     while (i < 1 + ft_abs_val(end - start))
     {
            printf("%d, ", arr[i]);
            ++i;
     }
     printf("\n");
}
