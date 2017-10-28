#include "ft_printf.h"

int	ft_plus(char **start, t_file *file)
{
	if (**start == '+')
	{
		file->plus = 1;
		(*start)++;
		return (1);
	}
	return (0);
}

int	ft_minus(char **start, t_file *file)
{
	if (**start == '-')
	{
		(*start)++;
		while (**start == ' ' || **start == '-' || **start == '+' || **start == '0')
		{
			if (**start == '+')
				file->plus = 1;
			(*start)++;
		}
		file->minus = ft_atoi(*start);
		while (ft_isdigit(**start))
			(*start)++;
		return (1);
	}
	return (0);
}
