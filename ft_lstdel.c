#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while (tmp)
	{
		ft_lstdelone(&tmp, del);
		tmp = tmp->next;
	}
}
