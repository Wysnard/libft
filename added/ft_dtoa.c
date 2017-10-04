#include "../libft.h"

char	*ft_dtoa(double nbr, size_t	size)
{
	char	*buf;

	if (nbr == 0)
		return (ft_strdup("0"));
	buf = ft_itoa(nbr);
	if (size > 0)
		buf = ft_strjoin(buf, ".");
	while (size > 0)
	{
		nbr = (nbr < 0 ) ? (nbr - (int)nbr) * -1 : nbr - (int)nbr;
		nbr *= 10;
		buf = ((size -= 1) == 0 && (nbr - (int)nbr) * 10 >= 5) ? ft_strjoin(buf, ft_utoa(nbr + 1, "0123456789")) : ft_strjoin(buf, ft_utoa(nbr, "0123456789"));
	}
	return (buf);
}
