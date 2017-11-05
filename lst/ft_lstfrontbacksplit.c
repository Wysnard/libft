#include "../libft.h"

void ft_lstfrontbacksplit(t_list* source, t_list** frontRef, t_list** backRef)
{
	t_list* fast;
	t_list* slow;
	
	if (source==NULL || source->next==NULL)
	{
		*frontRef = source;
		*backRef = NULL;
	}
	else
	{
		slow = source;
		fast = source->next;

		while (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}
		*frontRef = source;
		*backRef = slow->next;
		slow->next = NULL;
	}
}
