#include "libft.h"

static int	ft_ct(int n)
{
	int ct;

	ct = 0;
	while (n)
	{
		n = n / 10;
		ct++;
	}
	return (ct);
}

char * ft_itoa(int n)
{
	char *str;
	int i;
	int ct;

	ct = ft_ct(n) + 1;
	i = 1;
	str = ft_memalloc(sizeof(char) * ct);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n)
	{
		str[ct - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[ct] = '\0';
	return (str);
}
