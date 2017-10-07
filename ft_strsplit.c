#include "libft.h"

static char *ft_strtrim_modified(char const *s, char c)
{
	char *dest;
	int i;

	i = 0;
	while (s[i] == c)
		i++;
	if (!(dest = ft_strdup(&s[i])))
		return (NULL);
	i = 0;
	while (dest[i])
		i++;
	i--;
	while (dest[i] == c)
		i--;
	ft_bzero(&dest[i + 1], ft_strlen(&dest[i + 1]));
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

static int	ft_attribution(char **dest, char *trimed, char c)
{
	int	i;
	int	j;
	int	t;

	t = 0;
	j = 0;
	i = 0;
	if (!(dest[j] = ft_strnew(ft_wordlen(trimed, c))))
		return (0);
	while (trimed[t])
	{
		if (trimed[t] != c)
		{
			dest[j][i++] = trimed[t];
			if (trimed[t + 1] == c || trimed[t + 1] == '\0')
			{
				dest[j++][i] = '\0';
				i = 0;
				if (!(dest[j] = ft_strnew(ft_wordlen(&trimed[t], c))))
					return (0);
			}
		}
		t++;
	}
	dest[j][0] = '\0';
	return (1);
}

char **ft_strsplit(char const *s, char c)
{
	char **dest;
	char *trimed;

	if (!(trimed = ft_strtrim_modified(s, c)))
		return (NULL);
	if (dest = (char**)ft_memalloc(sizeof(*dest) * (ft_nb_words(trimed, c) + 1)))
	{
		if (!(ft_attribution(dest, trimed, c)))
			return (NULL);
	}
	free (trimed);
	return (dest);
}
