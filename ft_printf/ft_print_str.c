#include "ft_printf.h"

static size_t ft_precwstrlen(wchar_t *str, int precision, size_t i)
{
	if (*str == '\0' || precision == 0)
		return (i);
	else if (*str <= 0x7F)
		return (ft_precwstrlen(str + 1, precision - 1, i + 1));
	else if (*str <= 0x7FF && precision >= 2)
		return (ft_precwstrlen(str + 1, precision - 2, i + 2));
	else if (*str <= 0xFFFF && precision - 3)
		return (ft_precwstrlen(str + 1, precision - 3, i + 3));
	else if (*str <= 0x10FFFF && precision >= 4)
		return (ft_precwstrlen(str + 1, precision - 4, i + 4));
	return (i);
}

static size_t ft_wstrlen(const wchar_t *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		if (*str <= 0x7F)
			i++;
		else if (*str <= 0x7FF)
			i += 2;
		else if (*str <= 0xFFFF)
			i += 3;
		else if (*str <= 0x10FFFF)
			i += 4;
		str++;
	}
	return (i);
}

int	ft_print_wstr(va_list *ap, t_file *file)
{
	wchar_t *str;
	size_t	len;

	str = va_arg(*ap, wchar_t *);
	len = (file->precision > -1) ? ft_precwstrlen(str, file->precision, 0) : ft_wstrlen(str);
	file->count += ft_get_attribute(file->dial, len, ' ');
	file->count += (file->minus == -1) ? ft_get_attribute(file->zero, len, ' ') : 0;
	ft_putnwstr(str, len);
	file->count += ft_get_attribute(file->minus, len, ' ') + len;
	return (1);
}

int	ft_print_str(va_list *ap, t_file *file)
{
	const char *str;
	char	*cp;

	if (file->modif == l)
		ft_print_wstr(ap, file);
	else
	{
		str = va_arg(*ap, const char *);
		cp = (file->precision < ft_strlen(str) && file->precision > -1) ? ft_strndup(str, file->precision) : ft_strdup(str);
		file->count += ft_get_attribute(file->dial, ft_strlen(cp), ' ');
		file->count += (file->minus == -1) ? ft_get_attribute(file->zero, ft_strlen(cp), ' ') : 0;
		ft_putstr(cp);
		file->count += ft_get_attribute(file->minus, ft_strlen(cp), ' ');
		file->count = file->count + ft_strlen(cp);
		free(cp);
	}
	return (1);
}

int	ft_print_S(va_list *ap, t_file *file)
{
	file->modif = l;
	ft_print_str(ap, file);
	return (1);
}
