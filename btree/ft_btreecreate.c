#include "../libft.h"

t_btree	*ft_btreecreate(void *item)
{
  t_btree	*tmp;

	tmp = NULL;
	tmp = malloc(sizeof(*tmp));
	if (tmp)
	{
		tmp->content = item;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}
