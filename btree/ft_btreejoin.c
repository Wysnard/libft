#include "../libft.h"

t_btree	*ft_btreejoin(t_btree *gauche, t_btree *droite, void *item)
{
	t_btree	*tr;

	if (!(tr = malloc(sizeof(*tr))))
		return (NULL);
	tr->content = item;
	tr->left = gauche;
	tr->right = droite;
	return (tr);
}
