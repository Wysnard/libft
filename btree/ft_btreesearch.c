#include "../libft.h"

void *ft_btreesearch(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
  if (root == NULL)
    return (NULL);
  if (root->left != NULL)
    ft_btreesearch(root->left, data_ref, cmpf);
  if ((*cmpf)(root->item, data_ref) == 0)
    return (root->item);
  if (root->right != NULL)
    ft_btreesearch(root->right, data_ref, cmpf);
  return (NULL);
}
