#include "../libft.h"

void	ft_swap(void **s1, void **s2)
{
	void	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
