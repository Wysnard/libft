#include "ft_printf.h"

int	ft_get_modif(char **start, t_file *file)
{
	if (**start == 'h' || **start == 'l' || **start == 'j' || **start == 'z')
	{
		if (**start == 'h' && *(*start + 1) == 'h')
		{
			file->modif = hh;
			(*start)++;
		}
		else if (**start == 'l' && *(*start + 1) == 'l')
		{
			file->modif = ll;
			(*start)++;
		}
		else if (**start == 'h')
			file->modif = h;
		else if (**start == 'l')
			file->modif = l;
		else if (**start == 'j')
			file->modif = j;
		else if (**start == 'z')
			file->modif = z;
		(*start)++;
		return (1);
	}
	return (0);
}
