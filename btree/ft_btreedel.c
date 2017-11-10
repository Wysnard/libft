#include "../libft.h"

void	ft_btreedel(t_btree *tr)
{
	if (tr == NULL)
		return ;
	//ft_printf("suppression de %s\n", tr->item);
	ft_btreedel(tr->left);
	ft_btreedel(tr->right);
	if (tr->content)
		free(tr->content);
	free(tr);
}
