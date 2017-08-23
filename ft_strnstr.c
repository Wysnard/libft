#include "libft.h"

char * ft_strnstr(const char	*meule_de_foin, const char *aiguille, size_t len)
{
	int i;
	int j;

	j = 0;
	if (aiguille == NULL || *aiguille == '\0')
		return ((char *)meule_de_foin);
	while (meule_de_foin[j] && len)
	{
		i = 0;
		if (meule_de_foin[j] == aiguille[i])
		{
			while (meule_de_foin[j] == aiguille[i] && len)
			{
				j++;
				i++;
				len--;
				if (aiguille[i] == '\0')
					return ((char *)&meule_de_foin[j - i]);
			}
		}
		else
		{
			j++;
			len--;
		}
	}
	return (NULL);
}
