#ifndef __FT_PRINTF_H__
#define __FT_PRINTF_H__

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <wchar.h>
#include <stdint.h>
#include "libft.h"

typedef	struct	s_file
{
	int precision;
	int count;
	int	dial;
	int minus;
	int	zero;
	int	plus;
	enum {
		none,
		hh,
		h,
		l,
		ll,
		j,
		z
	}	modif;
}								t_file;

void	initialisation(t_file *file);

int	ft_printf(const char *arg1, ...);
int	ft_get_precision(char *start, t_file *file);
int ft_get_attribute(int file, int len, char c);
int ft_count_nb(int nb);
void ft_putnbr_base(unsigned int nbr, char *base);
int	ft_print_str(va_list *ap, t_file *file);
int	ft_print_int(va_list *ap, t_file *file);
int	ft_print_char(va_list *ap, t_file *file);
int	ft_print_base_o(va_list *ap, t_file *file);
int	ft_print_base_u(va_list *ap, t_file *file);
int	ft_print_base_x(va_list *ap, t_file *file);
int	ft_print_base_X(va_list *ap, t_file *file);
int	ft_print_p(va_list *ap, t_file *file);
int	ft_print_double(va_list *ap, t_file *file);
int	ft_print_S(va_list *ap, t_file *file);
int	ft_print_C(va_list *ap, t_file *file);
int	ft_print_long(va_list *ap, t_file *file);

void	ft_regex(va_list *ap, t_file *file, char start);

int	ft_minus(char **start, t_file *file);
int	ft_plus(char **start, t_file *file);
int	ft_get_modif(char **start, t_file *file);
void	ft_putnwstr(const wchar_t *str, size_t len);
int	ft_is_init(t_file *file);

void	ft_optdial1(char **start, t_file *file);
void	ft_optdial2(char **start, t_file *file);
void	ft_optzero(char **start, t_file *file);
void	ft_optdot(char **start, t_file *file);

void	ft_process(va_list *ap, t_file *file, char **start);

#endif
