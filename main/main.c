#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void ft_memtest(void)
{
	char	*str;
	char	*dest;
	char	*test;
	char	*mem;

	str = ft_memalloc(sizeof(char) * 4);
	dest = malloc(sizeof(char) * 4);
	test = ft_memalloc(sizeof(char) * 8);
	test[0] = 'B';
	test[1] = 'o';
	test[2] = 'n';
	test[3] = 'j';
	test[4] = 'o';
	test[5] = 'u';
	test[6] = 'r';
	test[7] = '\0';

	printf("TEST = %s\n", test);
	printf("STREQU = %d\n", ft_strequ("a", "v"));
	mem = ft_strsub(test, 2, 5);
	printf("STRSUB = %s\n", mem);
	//mem = ft_strmap(test, &ft_toupper);
	//printf("MAP = %s\n", mem);
	free(str);
	free(dest);
	free(mem);
	ft_strdel(&test);
	printf("AFTERDEL TEST = %p\n", test);
}

int main()
{
	char str[] = "   lol     polo ' 345 gui   ";
	char str2[20] = "les gens";
	char *dest;
	char *test;
	char *itoa;
	int cmp;
	int i;
	intmax_t	d = 0;
	wchar_t w[3] = {'l', 'o', '0'};

	i = 0;
	dest = NULL;
	//printf("STRCAT = %s\n", ft_strcat(str, str2));
	//ft_putnbr(ft_atoim("-1234"));
	//dest = ft_strndup(str2, 9);
	//printf("STRNDUP = %s\n", dest);
	//ft_memtest();
	if (test = ft_strstr("Bonjour les gens", "n"))
		ft_printf("%s\n", test);
	//while (test[i][0])
	//{
		//printf("SPLIT TEST = %s\n", test[i]);
		//i++;
	//}
	//itoa = ft_itoa(-23);
	//printf("ITOA = %s\n", itoa);
	//ft_putendl(str2);
	//printf("ATOI = %d\n", ft_atoi("473274"));
	//cmp = isprint('0');
	//printf("convert base = %s\n", ft_convert_base("-11", "01", "0123"));
	//free(test);
	//free(itoa);
	//free(dest);
	//ft_putstr(ft_itoa(0));
	//ft_putstr(itoa = ft_imtoa_base(d, "0123456789"));
	//ft_putchar('\n');
	//ft_print_bits(1);
	//printf("imtoa = %d", d);
	//free (itoa);
}
