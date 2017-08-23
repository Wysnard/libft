#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *begin;
	t_list *new;
	t_list *tmp;

	new = NULL;
	tmp = NULL;
	if (lst)
	{
		tmp = f(lst);
		new = ft_lstnew(tmp->content, tmp->content_size);
		begin = new;
		new = new->next;
		lst = lst->next;
	}
	while (lst)
	{
		tmp = f(lst);
		new = ft_lstnew(tmp->content, tmp->content_size);
		new = new->next;
		lst = lst->next;
	}
	return (begin);
}
