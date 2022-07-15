#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*new_elt;

	new_elt = *begin_list
	if ((*cmp)(new_elt->data, data_ref) == 0)
	{
		*begin_list = new_elt->next;
		free(new_elt);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	new_elt = *begin_list;
	ft_list_remove_if(&new_elt->next, data_ref, cmp);
}
