#include "../libft.h"

Pile	*ft_pileinit(void)
{
	Pile *pile;

	pile = malloc(sizeof(*pile));
	pile->first = NULL;
	pile->info = NULL;
	return (pile);
}
