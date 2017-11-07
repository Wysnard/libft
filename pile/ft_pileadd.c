#include "../libft.h"

void ft_pileadd(t_Pile *pile, void *info, size_t content_size)
{
	t_list	*new;

	new = NULL;
	if (!(new = ft_lstnew(info, content_size)))
		exit (EXIT_FAILURE) ;
	ft_lstadd(&pile->first, new);
}
