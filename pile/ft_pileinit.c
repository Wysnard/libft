#include "../libft.h"

t_Pile	*ft_pileinit(void)
{
	t_Pile *pile;

	pile = malloc(sizeof(*pile));
	pile->first = NULL;
	pile->info = NULL;
	return (pile);
}
