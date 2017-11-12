#include "../libft.h"

size_t	ft_strchri(char *str, int c)
{
	size_t	i;

	if (!str || !*str)
		return (0);
	if ((char)c == '\0')
		return (ft_strlen(str));
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (i);
		i += 1;
	}
	return (i);
}
