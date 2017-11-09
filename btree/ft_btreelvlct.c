#include "../libft.h"

int	ft_btreelvlct(t_btree *root)
{
	int right;
	int left;

	if (root == NULL)
		return (0);
	return (((ft_btreelvlct(root->left) > ft_btreelvlct(root->right)) ?
	ft_btreelvlct(root->left) : ft_btreelvlct(root->right)) + 1);
}
