#include "ft_printf.h"

int	ft_print_base_o(va_list *ap, t_file *file)
{
	unsigned int nb;
	char *str;

	if (!(nb = va_arg(*ap, unsigned int)))
		return (0);
	str = ft_convert_base(ft_utoa(nb, "0123456789"), "0123456789", "01234567");
	file->count += ft_get_attribute(file->dial, ft_strlen(str), ' ');
	file->count += ft_get_attribute(file->zero, ft_strlen(str), '0');
	file->count += ft_get_attribute(file->precision, ft_strlen(str), '0');
	ft_putstr(str);
	file->count += ft_strlen(str) + ft_get_attribute(file->minus, ft_strlen(str), ' ');
	free(str);
	return (1);
}

int	ft_print_base_u(va_list *ap, t_file *file)
{
	unsigned int nb;
	char	*str;

	if (!(nb = va_arg(*ap, unsigned int)))
		return (0);
	str = ft_utoa(nb, "0123456789");
	file->count += ft_get_attribute(file->dial, ft_strlen(str), ' ') + (file->minus == -1) ? ft_get_attribute(file->zero, ft_strlen(str), '0') : 0;
	file->count += ft_get_attribute(file->precision, ft_strlen(str), '0');
	ft_putstr(str);
	file->count += ft_strlen(str) + ft_get_attribute(file->minus, ft_strlen(str), ' ');
	free(str);
	return (1);
}

int	ft_print_base_x(va_list *ap, t_file *file)
{
	unsigned int	nb;
	char	*str;

	nb = va_arg(*ap, unsigned int);
	if (!(nb || ft_is_init(file)))
	{
		ft_putchar('0');
		file->count++;
		return (0);
	}
	str = ft_convert_base(ft_utoa(nb, "0123456789"), "0123456789", "0123456789abcdef");
	file->count += (file->dial > -1 && nb) ? ft_get_attribute(file->dial, ft_strlen(str) + 2, ' ') : ft_get_attribute(file->dial, ft_strlen(str), ' ');
	if (file->dial > -1 && nb)
	{
		ft_putstr("0x");
		file->count += 2;
	}
	if (file->minus == -1)
		file->count += (file->dial > -1 && nb) ? ft_get_attribute(file->zero, ft_strlen(str) + 2, '0') : ft_get_attribute(file->zero, ft_strlen(str), '0');
	file->count += ft_get_attribute(file->precision, ft_strlen(str), '0');
	ft_putstr(str);
	file->count += (file->dial > -1 && file->minus > -1 && nb) ? ft_get_attribute(file->minus, ft_strlen(str) + 2, ' ') : ft_get_attribute(file->minus, ft_strlen(str), ' ');
	file->count += ft_strlen(str);
	free(str);
	return (1);
}

int	ft_print_base_X(va_list *ap, t_file *file)
{
	unsigned int	nb;
	char	*str;

	nb = va_arg(*ap, unsigned int);
	if (!(nb || ft_is_init(file)))
	{
		ft_putchar('0');
		file->count++;
		return (0);
	}
	str = ft_convert_base(ft_utoa(nb, "0123456789"), "0123456789", "0123456789ABCDEF");
	file->count += (file->dial > -1 && nb) ? ft_get_attribute(file->dial, ft_strlen(str) + 2, ' ') : ft_get_attribute(file->dial, ft_strlen(str), ' ');
	if (file->dial > -1 && nb)
	{
		ft_putstr("0X");
		file->count += 2;
	}
	if (file->minus == -1)
		file->count += (file->dial > -1 && nb) ? ft_get_attribute(file->zero, ft_strlen(str) + 2, '0') : ft_get_attribute(file->zero, ft_strlen(str), '0');
	file->count += ft_get_attribute(file->precision, ft_strlen(str), '0');
	ft_putstr(str);
	file->count += (file->dial > -1 && file->minus > -1 && nb) ? ft_get_attribute(file->minus, ft_strlen(str) + 2, ' ') : ft_get_attribute(file->minus, ft_strlen(str), ' ');
	file->count += ft_strlen(str);
	free(str);
	return (1);
}

int	ft_print_p(va_list *ap, t_file *file)
{
	if (file->dial == -1)
		file->dial = 0;
	return (ft_print_base_x(ap, file));
}
