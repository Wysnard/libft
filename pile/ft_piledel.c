#include "../libft.h"

void	*ft_depiler(Pile *pile)
{
	t_list	*list;
	void	*cont;

	const = NULL;
	if (pile == NULL)
		exit (EXIT_FAILURE);
	if (pile->first != NULL)
	{
		list = pile->first;
		cont = list->content;
		pile->first = list->next;
		free (list);
	}

	return (cont);
}
