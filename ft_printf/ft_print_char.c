#include "ft_printf.h"

static wchar_t	ft_print_wchar(va_list *ap, t_file *file)
{
	wchar_t	car;

	car = (sizeof(wint_t) < sizeof(int)) ? (wchar_t)va_arg(*ap, int) : (wchar_t)va_arg(*ap, wint_t);
	file->count += ft_get_attribute(file->dial, 1, ' ') + (file->minus == -1) ? ft_get_attribute(file->zero, 1, '0') : 0;
	ft_putwchar(car);
	file->count += ft_get_attribute(file->minus, 1, ' ') + 1;
	return (car);
}

int	ft_print_char(va_list *ap, t_file *file)
{
	if (file->modif == l)
		ft_print_wchar(ap, file);
	else
	{
		file->count += ft_get_attribute(file->dial, 1, ' ') + (file->minus == -1) ? ft_get_attribute(file->zero, 1, '0') : 0;
		ft_putchar(va_arg(*ap, int));
		file->count += ft_get_attribute(file->minus, 1, ' ') + 1;
	}
	return (1);
}

int	ft_print_C(va_list *ap, t_file *file)
{
	file->modif = l;
	ft_print_char(ap, file);
	return (1);
}
