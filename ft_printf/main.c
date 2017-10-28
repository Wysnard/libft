#include "ft_printf.h"

int main()
{
	int ret;
	int	r;
	int tab[] = {47, 63, 72, 90};
	char *str;
	double	d = 30.324324;
	wchar_t	w[3] = {'l', 'o', 'l'};
	int i = -4;
	unsigned char	car = 130;

	str = ft_strdup("évité");
	//ft_putwstr(w);
	r = ft_printf("%+d|\n", 1256);
	printf("r =%d\n", r);
	//ret = printf("%hi|\n", -30);
	//ret = printf("%lc|\n", 48);
	r = printf("%+d|\n", 1256);
	printf("r =%d\n", r);
	free (str);
	//ft_putnbr(0x7F);
	//ft_putchar(car);
	//ft_putstr(ft_itoa(d));
	//printf("convert = %s\n", ft_convert_base("11111111", "01", "0123456789"));
	return (0);
}
