#include "libft.h"

int isascii(int c)
{
	if (c < 128)
		return (1);
	return (0);
}
