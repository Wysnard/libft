#include "../libft.h"

int	ft_lstlen(t_list *list)
{
	t_list	*tmp;
	int	i;

	i = 0;
	tmp = list;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
