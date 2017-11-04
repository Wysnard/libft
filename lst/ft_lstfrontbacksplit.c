#include "../libft.h"

void	ft_lstfrontbacksplit(t_list *src, t_list **a, t_list **b)
{
	t_list	*slow;
	t_list	*fast;

	if (src == NULL || src->next == NULL)
	{
		*a = src;
		*b = NULL;
		return ;
	}
	slow = src;
	fast = src;
	while (fast)
	{
		fast = fast->next;
		if (fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		*a = src;
		*b = slow->next;
		slow->next = NULL;
	}
}
