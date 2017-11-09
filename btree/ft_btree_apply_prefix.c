#include "../libft.h"

void	ft_btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	(*applyf)(root->item);
	if (root->left != NULL)
		ft_btree_apply_prefix(root->left, applyf);
	if (root->right != NULL)
		ft_btree_apply_prefix(root->right, applyf);
}
