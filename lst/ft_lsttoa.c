#include "../libft.h"

char	*ft_lsttoa(t_list *list)
{
	t_list	*tmp;
	int	len;
	char	*result;

	len = 0;
	tmp = list;
	while (tmp)
	{
		len += ft_strlen(list->content);
		tmp = tmp->next;
	}
	result = ft_strnew(len);
	while (list)
	{
		ft_strcat(result, list->content);
		list = list->next;
	}
	return (result);
}
