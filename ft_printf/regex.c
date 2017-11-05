#include "ft_printf.h"

void	ft_regex(va_list *ap, t_file *file, char start)
{
	if (start == 'c')
		ft_print_char(ap, file);
	else if (start == 's')
		ft_print_str(ap, file);
	else if (start == 'd' || start == 'i')
		ft_print_int(ap, file);
	else if (start == 'o')
		ft_print_base_o(ap, file);
	else if (start == 'u')
		ft_print_base_u(ap, file);
	else if (start == 'x')
		ft_print_base_x(ap, file);
	else if (start == 'X')
		ft_print_base_X(ap, file);
	else if (start == 'p')
		ft_print_p(ap, file);
	else if (start == 'f')
		ft_print_double(ap, file);
	else if (start == 'S')
		ft_print_S(ap, file);
	else if (start == 'C')
		ft_print_C(ap, file);
	else if (start == 'D' || start == 'O' || start == 'U')
		ft_print_long(ap, file);
	else if (start == '%')
		ft_putchar('%');
}
