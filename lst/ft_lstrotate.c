#include "../libft.h"

int	ft_lstrotate(t_list **alst)
{
	t_list	*tmp;
	t_list	*first;

	tmp = *alst;
	if (!tmp || !tmp->next)
		return (0);
	if (!tmp->next->next)
	{
		ft_swap(&tmp->content, &tmp->next->content);
		return (1);
	}
	first = tmp->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *alst;
	(*alst)->next = NULL;
	*alst = first;

	return (1);
}
