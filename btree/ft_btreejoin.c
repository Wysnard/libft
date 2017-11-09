#include "../libft.h"

t_btree	*ft_btreejoin(t_btree *gauche, t_btree *droite, void *item)
{
	t_btree	*tr;

	if (!(tr = malloc(sizeof(*tr))))
		return (NULL);
	tr->item = item;
	tr->left = gauche;
	tr->right = droite;
	return (tr);
}
