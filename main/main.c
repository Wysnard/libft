#include "libft.h"
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
	mem = ft_strsub(test, 2, 3);
	printf("STRSUB = %s\n", mem);
	//mem = ft_strmap(test, &ft_toupper);
	//printf("MAP = %s\n", mem);
	free(str);
	free(dest);
	free(mem);
	ft_strdel(&test);
	printf("AFTERDEL TEST = %d\n", test);
}

int main()
{
	char str[] = "                                       ";
	char str2[20] = "les gens";
	char *dest;
	char **test;
	char *itoa;
	int cmp;
	int i;

	i = 0;
	//dest = ft_strndup(str2, 9);
	//printf("STRNDUP = %s\n", dest);
	ft_memtest();
	test = ft_strsplit(str, ' ');
	printf("SPLIT TEST = %s\n", test[0]);
	itoa = ft_itoa(-2147483648);
	printf("ITOA = %s\n", itoa);
	ft_putendl(str2);
	printf("ATOI = %d\n", ft_atoi("473274"));
	//cmp = isprint('0');
	free(test);
	free(itoa);
	free(dest);
}
