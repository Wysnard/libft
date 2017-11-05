#include "ft_printf.h"

void	ft_process(va_list *ap, t_file *file, char **start)
{
	(*start)++;
	while (**start == ' ')
		(*start)++;
	ft_plus(start, file);
	if (**start == '#' && (*start)[1] && (*start)[1] != '0')
		ft_optdial1(start, file);
	else if (**start == '#' && (*start)[1] && (*start)[1] == '0')
		ft_optdial2(start, file);
	if (**start == '0')
		ft_optzero(start, file);
	ft_minus(start, file);
	if (**start == '.')
		ft_optdot(start, file);
	ft_get_modif(start, file);
	ft_regex(ap, file, **start);
}
