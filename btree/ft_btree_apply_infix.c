#include "../libft.h"

void	ft_btree_apply_infix(t_btree *root, void(*applyf)(void *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_btree_apply_infix(root->left, applyf);
	(*applyf)(root->content);
	if (root->right != NULL)
		ft_btree_apply_infix(root->right, applyf);
}
