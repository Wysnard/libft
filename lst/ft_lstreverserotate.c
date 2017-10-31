#include "../libft.h"

int	ft_lstreverserotate(t_list **alst)
{
	t_list	*tmp;
	t_list	*first;

	tmp = *alst;
	first = NULL;
	if (!tmp || !tmp->next)
		return (0);
	if (!tmp->next->next)
	{
		ft_swap(&tmp->content, &tmp->next->content);
		return (1);
	}
	while (tmp->next->next)
		tmp = tmp->next;
	first = tmp->next;
	first->next = *alst;
	tmp->next = NULL;

	return (1);
}
