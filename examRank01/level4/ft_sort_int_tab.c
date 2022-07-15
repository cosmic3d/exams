static void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int		swap;

	swap = 1;
	while (swap == 1)
	{
		i = 1;
		swap = 0;
		while (i < size)
		{
		 	 if (tab[i - 1] > tab [i])
			{
				ft_swap(&tab[i - 1], &tab[i]);
				swap = 1;
			}
			 ++i;
		}
	}
}

//------------------------------------------------------------------
#include <stdio.h>

void print_arr(int *tab, unsigned int size)
{
     unsigned int i = 0;
     while (i < size)
     {
             printf("%d, ", tab[i]);
             ++i;
     }
     printf("\n");
}

int          main(void)
{
     int tab[] = { 5, -4, 3, -2, 1, 0 };
     unsigned int size = sizeof(tab) / sizeof(*tab);

     print_arr(tab, size);
     ft_sort_int_tab(tab, size);
     print_arr(tab, size);
}
