#include "ft_printf.h"

void	ft_optdial1(char **start, t_file *file)
{
	(*start)++;
	ft_plus(start, file);
	ft_minus(start, file);
	file->dial = (ft_atoi(*start) < 0) ? 0 : ft_atoi(*start);
	while (ft_isdigit(**start))
		(*start)++;
}

void	ft_optdial2(char **start, t_file *file)
{
	(*start)++;
	file->dial = 0;
	file->zero = ft_atoi((*start) + 1);
	while (ft_plus(start, file));
	ft_minus(start, file);
	while (ft_isdigit(**start))
		(*start)++;
}

void	ft_optzero(char **start, t_file *file)
{
	(*start)++;
	file->zero = ft_atoi(*start);
	ft_plus(start, file);
	ft_minus(start, file);
	while (ft_isdigit(**start))
		(*start)++;
}

void	ft_optdot(char **start, t_file *file)
{
	(*start)++;
	file->precision = ft_atoi(*start);
	while (ft_isdigit(**start))
		(*start)++;
}
