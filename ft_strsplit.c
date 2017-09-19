#include "libft.h"

static char *ft_strtrim_modified(char const *s, char c)
{
	char *dest;
	int i;

	i = 0;
	if(dest = ft_memalloc(sizeof(char) * ft_strlen(s)))
	{
		while(s[i] == c)
			i++;
		ft_strcpy(dest, &s[i]);
		i = 0;
		while (dest[i])
			i++;
		i--;
		while (dest[i] == c)
			i--;
		dest[i + 1] = '\0';
	}
	return (dest);
}

static int	ft_nb_words(char const *trimed, char c)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (trimed[i])
	{
		if (trimed[i] != c && (trimed[i + 1] == c || trimed[i + 1] == '\0'))
			nb++;
		i++;
	}
	return (nb);
}

static int	ft_wordlen(char const *trimed, char c)
{
	int i;

	i = 0;
	while (trimed[i] && trimed[i] != c)
		i++;
	return (i);
}

static void	ft_attribution(char **dest, char *trimed, char c)
{
	int	i;
	int	j;
	int	t;

	t = 0;
	j = 0;
	i = 0;
	dest[j] = ft_memalloc(sizeof(char) * ft_wordlen(trimed, c));
	while (trimed[t])
	{
		if (trimed[t] != c)
		{
			dest[j][i] = trimed[t];
			i++;
			if (trimed[t + 1] == c || trimed[t + 1] == '\0')
			{
				dest[j][i] = '\0';
				i = 0;
				j++;
				dest[j] = ft_memalloc(sizeof(char) * ft_wordlen(&trimed[t], c));
			}
		}
		t++;
	}
	dest[j][0] = '\0';
}

char **ft_strsplit(char const *s, char c)
{
	char **dest;
	char *trimed;

	trimed = ft_strtrim_modified(s, c);
	if (dest = (char**)ft_memalloc(sizeof(*dest) * (ft_nb_words(trimed, c) + 1)))
	{
		ft_attribution(dest, trimed, c);
	}
	free (trimed);
	return (dest);
}
