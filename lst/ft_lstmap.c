#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*first;

	first = f(lst);
	ret = first;
	while (lst->next)
	{
		ret->next = f(lst->next);
		ret = ret->next;
		lst = lst->next;
	}
	return (first);
}
