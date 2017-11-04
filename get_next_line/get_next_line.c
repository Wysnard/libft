#include "get_next_line.h"

static	int	ft_strlenfind(const char *str, int find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)find)
			break ;
		i++;
	}
	return (i);
}

int	get_next_line(const int fd, char **line)
{
	int		ret;
	char		buffer[BUFF_SIZE + 1];
	static	char	*save;

	if (BUFF_SIZE < 1 || fd < 0)
		return (-1);
	while (ret = read(fd, buffer, BUFF_SIZE))
	{
		buffer[ret] = '\0';
		save = (save) ? ft_strjoin(save, buffer) : ft_strndup(buffer, BUFF_SIZE);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (!save && !ret)
		return (-1);
	if (save)
			*line = (*save == '\n') ? ft_strdup("")
			: ft_strndup(save, ft_strlenfind(save, '\n'));
	if (!ft_strchr(save, '\n'))
	{
		*line = ft_strdup("");
		return (0);
	}
	ft_strcpy(save, ft_strchr(save, '\n') + 1);
	return (1);
}
