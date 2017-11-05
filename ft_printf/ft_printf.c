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
		initialisation(&file);
		if (*start == '%')
			ft_process(&ap, &file, &start);
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
