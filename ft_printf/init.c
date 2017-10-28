#include "ft_printf.h"

void	initialisation(t_file *file)
{
	file->precision = -1;
	file->dial = -1;
	file->minus = -1;
	file->zero = 0;
	file->plus = 0;
	file->modif = none;
}
