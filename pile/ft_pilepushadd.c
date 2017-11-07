#include "../libft.h"

void	ft_pilepushadd(t_Pile *pile, void *info, size_t content_size)
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	tmp = NULL;
	if (!(new = ft_lstnew(info, content_size)) || !pile)
		exit (EXIT_FAILURE) ;
	ft_lstpushadd(&pile->first, new);
}
