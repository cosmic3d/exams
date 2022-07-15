#include "list.h"

static void	ft_swap(t_list *a,t_list *b)
{
	int	tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	swap;
	t_list *new_lst;

	swap = 1;
	new_list = lst;
	while (swap == 1)
	{
		swap = 0;
		while (new_lst && new_lst->next)
		{
			if ((*cmp)(new_lst->data, new_lst->next->data) == 0)
			{
				ft_swap(new_lst, new_lst->next);
				swap = 1;
			}
			new_lst = new_lst->next;
		}
	}
	return (lst);
}
