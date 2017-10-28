#include "ft_printf.h"
#include <stdio.h>

static intmax_t	ft_get_type(va_list *ap, t_file *file)
{
	intmax_t	nbr;

	nbr = va_arg(*ap, intmax_t);
	if (file->modif == hh)
		nbr = (char)nbr;
	else if (file->modif == h)
		nbr = (short int)nbr;
	else if (file->modif == l)
		nbr = (long)nbr;
	else if (file->modif == ll)
		nbr = (long long)nbr;
	else if (file->modif == j)
		nbr = (intmax_t)nbr;
	else if (file->modif == z)
		nbr = (size_t)nbr;
	else
		nbr = (int)nbr;
	return (nbr);
}

int	ft_print_int(va_list *ap, t_file *file)
{
	intmax_t nb;
	char	*str;

	nb = ft_get_type(ap, file);
	str = ft_imtoa_base(nb, "0123456789");
	if (file->plus && nb > -1)
		ft_putchar('+');
	if (file->minus == -1)
	{
		file->count += ft_get_attribute(file->zero, ft_strlen(str), '0');
		file->count += (file->plus && nb > 0) ? 1 : 0;
	}
	//file->count += ft_get_attribute(file->dial, ft_strlen(str), ' ');
	ft_putstr(str);
	file->count += ft_strlen(str) + ft_get_attribute(file->minus, ft_strlen(str), ' ');
	free(str);
	return (1);
}

int	ft_print_long(va_list *ap, t_file *file)
{
	file->modif = l;
	ft_print_int(ap, file);
	return (1);
}
