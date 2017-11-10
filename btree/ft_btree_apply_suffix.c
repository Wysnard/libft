#include "../libft.h"

void	ft_btree_apply_suffix(t_btree *root, void(*applyf)(void *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_btree_apply_suffix(root->left, applyf);
	if (root->right != NULL)
		ft_btree_apply_suffix(root->right, applyf);
	(*applyf)(root->content);
}
