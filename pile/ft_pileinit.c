#include "../libft.h"

void	ft_pileinit(void)
{
	Pile *pile;

	pile = malloc(sizeof(*pile));
	pile->first = NULL;
	pile->info = NULL;
}
