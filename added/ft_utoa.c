#include "../libft.h"

static int	ft_count(unsigned int nbr, size_t base)
{
	int i;

	i = 0;
	if (nbr == 0)
		return (1);
	else
	{
		while (nbr != 0)
		{
			nbr /= base;
			i++;
		}
		return (i);
	}
}

char	*ft_utoa(unsigned int nbr, char const *base_chr)
{
	char			*buf;
	int				i;
	size_t			base;

	base = ft_strlen(base_chr);
	if (!(buf = ft_strnew(ft_count(nbr, base))))
		return (NULL);
	i = 0;
	if (nbr == 0)
		buf[i++] = '0';
	while (nbr > 0)
	{
		buf[i++] = base_chr[nbr % base];
		nbr /= base;
	}
	buf[i] = '\0';
	ft_strrev(buf);
	return (buf);
}
