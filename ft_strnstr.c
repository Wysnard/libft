#include "libft.h"

char * ft_strnstr(const char	*meule_de_foin, const char *aiguille, size_t len)
{
	int	i;
	int	j;
	int	save;
	int	savelen;

	j = 0;
	if (aiguille == NULL || *aiguille == '\0')
		return ((char *)meule_de_foin);
	while (meule_de_foin[j] && len)
	{
		i = 0;
		if (meule_de_foin[j] == aiguille[i])
		{
			save = j;
			savelen = len;
			while (meule_de_foin[j++] == aiguille[i++] && len--)
				if (aiguille[i] == '\0')
					return ((char *)&meule_de_foin[j - i]);
			j = save + 1;
			len = savelen - 1;
		}
		else
		{
			j++;
			len--;
		}
	}
	return (NULL);
}
