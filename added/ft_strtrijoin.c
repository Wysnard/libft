#include "../libft.h"

char	*ft_strtrijoin(char *s1, char *s2, char *s3)
{
	char	*bridge;
	char	*join;

	bridge = ft_strjoin(s1, s2);
	join = ft_strjoin(bridge, s3);
	free(bridge);
	return (join);
}
