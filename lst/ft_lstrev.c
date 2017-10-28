#include "../libft.h"

void	ft_lstrev(t_list **list)
{
	t_list	*head;
	t_list	*rev;

	rev = *list;
	if (rev && rev->next)
	{
		head = rev->next;
		ft_lstrev(&(rev->next));
		head->next = rev;
		*list = rev->next;
		head->next->next = NULL;
	}
}
