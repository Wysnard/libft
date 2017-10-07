#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int	i;
	int	j;
	char	**split;
	int	begin;
	int	end;

	split = NULL;
	i = 0;
	j = 0;
	if (s && (split = (char **)malloc(sizeof(*split) * (ft_strlen(s) / 2 + 2))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			begin = i;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			if (end > begin)
				split[j++] = ft_strsub(s, begin, (end - begin));
		}
		split[j] = NULL;
	}
	return (split);
}
