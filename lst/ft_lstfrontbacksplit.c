#include "../libft.h"

void	ft_lstfrontbacksplit(t_list *src, t_list **a, t_list **b)
{
	t_list	*slow;
	t_list	*fast;

	if (src == NULL || src->next == NULL)
	{
		*a = src;
		*b = NULL;
	}
	else
	{
		slow = src;
		fast = src;
		while (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
			*a = src;
			*b = slow->next;
			slow->next = NULL;
		}
	}
}
