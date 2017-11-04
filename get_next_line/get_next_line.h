#ifndef	__GET_NEXT_LINE__
#define __GET_NEXT_LINE__
#define	BUFF_SIZE	9999

	#include <sys/types.h>
	#include <sys/stat.h>
	#include <fcntl.h>
	#include "libft.h"

	typedef	struct	get
	{
		char	*save;
		int	max;
	}					get;

	int	get_next_line(const int fd, char **line);

#endif
