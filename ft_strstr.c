#include "libft.h"

char *ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int	i;
	int	j;
	int	save;

	j = 0;
	if (aiguille == NULL || *aiguille == '\0')
		return ((char *)meule_de_foin);
	while (meule_de_foin[j])
	{
		i = 0;
		if (meule_de_foin[j] == aiguille[i])
		{
			save = j;
			while (meule_de_foin[j] == aiguille[i])
			{
				j++;
				i++;
				if (aiguille[i] == '\0')
					return ((char *)&meule_de_foin[j - i]);
			}
			j = save + 1;
		}
		else
			j++;
	}
	return (NULL);
}
