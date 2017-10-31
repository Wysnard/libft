#include "../libft.h"

void	*ft_piledel(Pile *pile)
{
	t_list	*list;
	void	*cont;

	cont = NULL;
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
