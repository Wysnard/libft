#include "../libft.h"

void	ft_print_bits(unsigned char octet)
{
	int	i;
	char	bits[8];

	i = 0;
	while (i < 8)
	{
		bits[i] = ((octet >> i) & 1) ? '1' : '0';
		i++;
	}
	bits[8] = '\0';
	ft_strrev(bits);
	ft_putstr(bits);
}
