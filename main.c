#include "libft.h"
#include <string.h>
#include <stdio.h>
int ft_cmp(void *s1, void *s2)
{
  return (strcmp(s1, s2));
}

void ft_prt(void *content)
{
  printf("%s\n", content);
}

int main()
{
    t_btree *tree;

    tree = NULL;
    ft_btreeinsert(&tree, "5", &ft_cmp);
    ft_btreeinsert(&tree, "4", &ft_cmp);
    ft_btreeinsert(&tree, "1", &ft_cmp);
    ft_btreeinsert(&tree, "2", &ft_cmp);
    ft_btreeinsert(&tree, "1", &ft_cmp);
    ft_btreeinsert(&tree, "0", &ft_cmp);
    ft_btreeinsert(&tree, "9", &ft_cmp);
    ft_btreeinsert(&tree, "8", &ft_cmp);
    ft_btreeinsert(&tree, "7", &ft_cmp);
    ft_btreeinsert(&tree, "6", &ft_cmp);
    ft_btreeinsert(&tree, "5", &ft_cmp);
    ft_btreeinsert(&tree, "4", &ft_cmp);
    ft_btreeinsert(&tree, "2", &ft_cmp);
    ft_btree_apply_prefix(tree, &ft_prt);
}
