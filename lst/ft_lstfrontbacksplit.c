#include "../libft.h"

void ft_lstfrontbacksplit(t_list* source, t_list** frontRef, t_list** backRef)
{
	t_list* fast;
	t_list* slow;
	if (source==NULL || source->next==NULL)
	{
		/* length < 2 cases */
		*frontRef = source;
		*backRef = NULL;
	}
	else
	{
		slow = source;
		fast = source->next;

		/* Advance 'fast' two nodes, and advance 'slow' one node */
		while (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}

		/* 'slow' is before the midpoint in the list, so split it in two
			at that point. */
		*frontRef = source;
		*backRef = slow->next;
		slow->next = NULL;
	}
}
