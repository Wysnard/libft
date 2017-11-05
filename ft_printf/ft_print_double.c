#include "ft_printf.h"

int	ft_print_double(va_list *ap, t_file *file)
{
	double	d;
	char	*str;

	if (!(d = va_arg(*ap, double)))
		return (0);
	str = (file->precision == -1) ? ft_dtoa(d, 6) : ft_dtoa(d, file->precision);
	if (file->plus && d > 0)
		ft_putchar('+');
	if (file->minus == -1)
		file->count += ft_get_attribute(file->zero, ft_strlen(str), '0') + (file->plus && d > 0) ? 1 : 0;
	file->count += ft_get_attribute(file->dial, ft_strlen(str), ' ');
	ft_putstr(str);
	file->count += ft_strlen(str) + ft_get_attribute(file->minus, ft_strlen(str), ' ');
	free(str);
	return (1);
}
