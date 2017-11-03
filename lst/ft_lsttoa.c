#include "../libft.h"

char	*ft_lsttoa(t_list *list)
{
	t_list	*tmp;
	int	len;
	char	*result;

	len = 0;
	if (!(tmp = list))
		return (NULL);
	while (tmp)
	{
		if (list->content == NULL)
			break ;
		len += ft_strlen(list->content);
		tmp = tmp->next;
	}
	result = ft_strnew(len);
	while (list)
	{
		if (list->content == NULL)
			break ;
		ft_strcat(result, list->content);
		list = list->next;
	}
	return (result);
}
