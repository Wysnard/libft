#include "ft_printf.h"

int ft_count_nb(int nb)
{
	int i;

	i = 0;
	while (nb)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int	ft_get_attribute(int file, int len, char c)
{
	int i;

	i = 0;
	if (file > -1)
		if ((file -= len) > 0)
			while (file)
			{
				ft_putchar(c);
				i++;
				file--;
			}
	return (i);
}

void	ft_putnwstr(const wchar_t *str, size_t len)
{
	size_t	i;

	i = 0;
	while (*str && i < len)
	{
		if (*str <= 0x7F)
			i++;
		else if (*str <= 0x7FF)
			i += 2;
		else if (*str <= 0xFFFF)
			i += 3;
		else if (*str <= 0x10FFFF)
			i += 4;
		if (i <= len)
			ft_putwchar(*str++);
	}
}

int	ft_is_init(t_file *file)
{
	if (file->precision == -1 ||
	file->dial == -1 ||
	file->minus == -1 ||
	file->zero == 0 ||
	file->plus == 0 ||
	file->modif == none)
		return (1);
	return (0);
}
