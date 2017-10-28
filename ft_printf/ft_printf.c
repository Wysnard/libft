#include "ft_printf.h"

int	ft_printf(const char *arg1, ...)
{
	va_list ap;
	t_file	file;
	char *start;

	file.count = 0;
	va_start(ap, arg1);
	if (!(start = (char *)arg1))
		return (-1);
	while (*start)
	{
		file.precision = -1;
		file.dial = -1;
		file.minus = -1;
		file.zero = 0;
		file.plus = 0;
		file.modif = none;
		if (*start == '%')
		{
			start++;
			while (*start == ' ')
				start++;
			ft_plus(&start, &file);
			if (*start == '#' && start[1] && start[1] != '0')
			{
				start++;
				ft_plus(&start, &file);
				ft_minus(&start, &file);
				file.dial = (ft_atoi(start) < 0) ? 0 : ft_atoi(start);
				while (ft_isdigit(*start))
					start++;
			}
			else if (*start == '#' && start[1] && start[1] == '0')
			{
				start++;
				file.dial = 0;
				file.zero = ft_atoi(start + 1);
				while (ft_plus(&start, &file));
				ft_minus(&start, &file);
				while (ft_isdigit(*start))
					start++;
			}
			if (*start == '0')
			{
				start++;
				file.zero = ft_atoi(start);
				ft_plus(&start, &file);
				ft_minus(&start, &file);
				while (ft_isdigit(*start))
					start++;
			}
			ft_minus(&start, &file);
			if (*start == '.')
			{
				start++;
				file.precision = ft_atoi(start);
				while (ft_isdigit(*start))
					start++;
			}
			ft_get_modif(&start, &file);
			if (*start == 'c')
				ft_print_char(&ap, &file);
			else if (*start == 's')
				ft_print_str(&ap, &file);
			else if (*start == 'd' || *start == 'i')
				ft_print_int(&ap, &file);
			else if (*start == 'o')
				ft_print_base_o(&ap, &file);
			else if (*start == 'u')
				ft_print_base_u(&ap, &file);
			else if (*start == 'x')
				ft_print_base_x(&ap, &file);
			else if (*start == 'X')
				ft_print_base_X(&ap, &file);
			else if (*start == 'p')
				ft_print_p(&ap, &file);
			else if (*start == 'f')
				ft_print_double(&ap, &file);
			else if (*start == 'S')
				ft_print_S(&ap, &file);
			else if (*start == 'C')
				ft_print_C(&ap, &file);
			else if (*start == 'D' || *start == 'O' || *start == 'U')
				ft_print_long(&ap, &file);
			else if (*start == '%')
				ft_putchar('%');
		}
		else
		{
			ft_putchar(*start);
			file.count++;
		}
		start++;
	}
	va_end(ap);
	return (file.count);
}
