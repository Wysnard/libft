#include "../libft.h"

void	ft_lstdelall(t_list **list)
{
	t_list	*current;
	t_list	*next;

	current = *list;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*list = NULL;
}
