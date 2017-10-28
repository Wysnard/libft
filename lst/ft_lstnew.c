#include "../libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = NULL;
	list = malloc(sizeof(*list) + content_size);
	if (list)
	{
		list->content = (content) ? (void *)content : NULL;
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
